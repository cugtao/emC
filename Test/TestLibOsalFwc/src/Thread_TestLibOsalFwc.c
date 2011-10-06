/************************************************************************************************
 * Copyright/Copyleft:
 *
 * For this software-package the LGPL Lesser General Public License,
 * published by the Free Software Foundation is valid at first.
 * This is valid, if no other special licence contract is agreed. It means:
 * 1. You can use this source without any restriction for any desired purpose.
 * 2. You can redistribute copies of this source to everybody.
 * 3. Every user of this source, also the user of redistribute copies with or without payment,
 *    must accept this license for further using.
 * 4. But the LPGL ist not appropriate for a whole software product,
 *    if this source is only a part of them. It means, the user must publish this part of source,
 *    but don't need to publish the whole source of the own product.
 * 5. You can study and modify (improve) this source for own using or for redistribution,
 *    but you have to license the modified sources likewise under this LGPL Lesser General Public License.
 * 6. You mustn't delete this Copyright/Copyleft inscription in this software package and in all source files.
 *    If you need only a part of this software-package, you must place this Copyright/Copyleft inscription
 *    at an easily noticeable position in the adequate file tree.
 * 7. If you are changing and publishing the content of source files,
 *    you mustn't delete the Copyright/Copyleft inscription inclusive the first author(s) in the source files. You have to write your changes and your name additionally in the description part for changes in the source files. If you use a part from source files as copy in your own files only, you have to name the author of that part of the sources in your sources. Furthermore you have to declare the usage of sources of the author in your product.
 * Special licence agreements:
 *
 * If this software or a part of them will be used in a comprehensive software-package
 * without free publishing of its content or usage,
 * then a special licence agreement in any other form is possible and necessary.
 * All developers and users of this software-package should agree to it,
 * with subscribing a contract, which is stored by both partners in paper-written form.
 * The state of existence of such a contract doesn't need to be published.
 * But a proper hint to the special licence agreement have to be stored at a position in the file-tree,
 * which is able to visit from outside, if the content of the files are able to visit from outside too.
 * If the sources and its usage and the licence is secrecy, it is okay too.
 *
 *
 * @author Hartmut Schorrig, Germany, Pinzberg, www.vishia.org
 *
 **copyright***************************************************************************************
 *
 * @content Test os_Thread
 * @version 0.95
 * list of changes:
 * 201-06-19: JcHartmut Schorrig creation .
 *
 */
#include "Main_TestLibOsalFwc.h"
#include <os_thread.h>
#include <os_time.h>
#include <os_sync.h>
#include <stdio.h>


typedef struct UserThreadData_t
{
  bool threadRun;
  int a; float b;
} UserThreadData;

typedef struct TestThread_t
{ OS_HandleThread hThread;
  OS_Mutex hMutexPrintf;
  UserThreadData threadData;
} TestThread;







TestThread testThreadData = {0};


int threadRoutine(void* dataP)
{
  UserThreadData* data = (UserThreadData*)dataP;   //assume that it's correct to cast. Maybe test data designation.
  while(data->threadRun){
    data->a +=1;
    os_sleep(1000);
    os_lockMutex(testThreadData.hMutexPrintf);
    {
      printf("Thread: ");
      os_sleep(100);  //normally don't sleep under mutex, but here for test.
      printf("%d\n", data->a);

    } os_unlockMutex(testThreadData.hMutexPrintf);
  }
  return 0;
}



void testThread()
{ int x;
  testThreadData.threadData.threadRun = true;
  os_createMutex("test", &testThreadData.hMutexPrintf);
  os_createThread(&testThreadData.hThread, threadRoutine, &testThreadData.threadData, "Test-Thread", 128, 0);
  while(true){
    os_sleep(1500);
    os_lockMutex(testThreadData.hMutexPrintf);
    {
      printf("Main");
      x +=1;
      os_sleep(100);  //normally don't sleep under mutex, but here for test.
      printf("%d\n", x);
    } os_unlockMutex(testThreadData.hMutexPrintf);

  }
}


