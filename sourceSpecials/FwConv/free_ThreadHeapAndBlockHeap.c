#include <Fwc/fw_ThreadContext.h>
#include <Fwc/fw_SimpleC.h>
#include <Fwc/fw_MemC.h>
#include <os_thread.h>
#include <os_mem.h>
#include <stdlib.h>  //it defines free(...)

#include <BlockHeap/BlockHeapJc.h>  //for free(ptr)

int free_MemC(void const* addr)
{ MemC buffer;
  MemUnit* ptr = (MemUnit*)addr;
  ThCxt* _thCxt = getCurrent_ThreadContextFW();
  if(_thCxt->mode & mCheckBufferUsed_Mode_ThCxt){
    if(_thCxt->mode & mBufferUsed_Mode_ThCxt){
      THROW_s0(IllegalStateException, "Thread buffer not free", 0);
    }
    _thCxt->mode |= mBufferUsed_Mode_ThCxt;
  }
  buffer = _thCxt->bufferAlloc;
  MemUnit const* bufferStart = PTR_MemC(buffer, MemUnit);
  MemUnit const* bufferEnd = bufferStart + size_MemC(buffer);
  if(ptr >= bufferStart && ptr < bufferEnd) {
    releaseUserBuffer_ThreadContextFw(ptr, _thCxt);
    return 3;
  } 
  else if(free_sBlockHeapJc(ptr, _thCxt)) { //try to free a block in blockheap
    return 2;
  }
  else   
  {
    //it seems to be a normal allocation.
    os_freeMem(ptr);
    return 1;
  }
}




