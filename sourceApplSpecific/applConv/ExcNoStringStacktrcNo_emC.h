/************************************************************************************************
 * Copyright/Copyleft:
 *
 * For this source the LGPL Lesser General Public License,
 * published by the Free Software Foundation is valid.
 * It means:
 * 1) You can use this source without any restriction for any desired purpose.
 * 2) You can redistribute copies of this source to everybody.
 * 3) Every user of this source, also the user of redistribute copies
 *    with or without payment, must accept this license for further using.
 * 4) But the LPGL ist not appropriate for a whole software product,
 *    if this source is only a part of them. It means, the user
 *    must publish this part of source,
 *    but don't need to publish the whole source of the own product.
 * 5) You can study and modify (improve) this source
 *    for own using or for redistribution, but you have to license the
 *    modified sources likewise under this LGPL Lesser General Public License.
 *    You mustn't delete this Copyright/Copyleft inscription in this source file.
 *
 * This source may be used also with another licence, if the author 
 * and all other here named co-authors have agreed to this contract.
 * Especially a company can use a copy of this sources in its products without publishing.
 * The user should have a underwritten contract therefore.
 *
 * @author Hartmut Schorrig, Germany, Pinzberg, www.vishia.org
 *
 **copyright***************************************************************************************
 *
 * @content definition of user interface for exception handling
 * This file should be only included by <applstdef_emC.h> for the case that exception handling 
 * with throw (C++) or longjmp should not be used. 
 * Instead, THROW writes in only one exeception object in Stacktrace
 * and the CATCH block is used as alternate code but in normal return functionality.
 * The processing a subroutine is not interrupted by a THROW, only the Exception information is written.
 * 
 * @author Jchartmut www.vishia.org
 * @version 0.82
 * list of changes:
 * 
 * 2017-01-21: Hartmut creation
 *
 ****************************************************************************/
#ifndef __applstdef_emC_h__
  /**This file fw_Exception.h should be included in the applstdef_emC.h. 
   * If this file is directly included, it needs the applstdef_emC.h. But the __fw_Exception_h__ guard should not be set firstly
   * to include the fw_Exception.h in the given order in applstddef.h
   */
  #include <applstdef_emC.h>
#endif



#ifndef __fw_ExcStacktrcNo_h__
#define __fw_ExcStacktrcNo_h__


#define __fw_Exception_h__       //prevent including
//#define __fw_ThreadContext_h__   //prevent including

//#define __NOT_SUPPORTED_ThreadContext_emC__
#define __NOT_SUPPORTED_ExceptionJc__

#include <emC/ExcThCxtBase_emC.h>  //the constants for exception should be known.


#ifndef __StringJc_defined__
  //minimalistic definition of StringJc to use this type before including emC/StringJc
  typedef OS_PtrVal_DEF(StringJc, void const);
  #define __StringJc_defined__
#endif //ifdef isNull_StringJc



typedef struct ExceptionStore_t {
  uint32 ctException;
  ExceptionJc first;
  ExceptionJc last;
} ExceptionStore;

void logSimple_ExceptionJc(int exc, int32 value, int val2, char const* file, int line);

typedef struct ThreadContext_emC_t {
  
  ExceptionJc exc;

  /**Set to 0 on input of matching CATCH block to set exc.exceptionNr to 0 on END_TRY */
  //int excNrTestCatch;

  /**This is the address of a variable in stack in the first level. */
  MemUnit* topmemAddrOfStack;

  /**This is the maximal found value of the stack size which is evaluated on [[getCurrentStackDepth_ThreadContext_emC(...)]] . */
  int stacksizeMax;

} ThreadContext_emC_s;

#define ThCxt ThreadContext_emC_s


/**Because the operation may use a pointer variable named _thCxt it is defined here.
* But it is initialized with null, because a ThreadContext is unknown, and it is a unknown forward type.
*/
#define STACKTRC_ROOT_ENTRY(NAME) struct ThreadContext_emC_t* _thCxt = getCurrent_ThreadContext_emC(); _thCxt->topmemAddrOfStack = (MemUnit*)&_thCxt 



/**Because the operation may use a pointer variable named _thCxt it is defined here.
* But it is initialized with null, because a ThreadContext is unknown, and it is a unknown forward type.
*/
#define STACKTRC_ENTRY(NAME) struct ThreadContext_emC_t* _thCxt = null;

/**For that the _thCxt variable is given in arguments of the operation */
#define STACKTRC_TENTRY(NAME)
#define STACKTRC_LEAVE
#define CALLINE

#define THCXT null

/**The threadContext is necessary to check whether an exception was thrown. Therefore initialize it. */
#define TRY if(_thCxt == null) { _thCxt = getCurrent_ThreadContext_emC(); }

/**With this statement the if-chain to check the exception value starts. Create a local pointer to the exception for better handling. 
 * excNrTestCatch = is the value used in END_TRY. It is set to 0 on a handled exception.
 */
#define _TRY { int _exc = _thCxt->exc.exceptionNr; int excNrTestCatch = _exc; \
  if(_exc ==0) { /*empty block till first CATCH if no exception*/

/**It closes the if(){ before from the _TRY or from a CATCH block before. Then it checks the exceptionNr with the given EXCPETION as mask.*/
#define CATCH(EXCEPTION, EXC_OBJ) } else if(_exc <= range_##EXCEPTION##Jc) { int EXC_OBJ = _exc; excNrTestCatch = 0;

#define FINALLY \
 } /*close CATCH brace */\
 { /*open to braces because END_TRY.*/


/**Rewrite the exceptionNr, maybe 0 on handled exception or if no exception. */
#define END_TRY _thCxt->exc.exceptionNr = excNrTestCatch; } }  /*closing brace from CATCH and from _TRY*/

/**All THROW() macros writes the exception into the ThreadContext_emC,
 * but the calling routine is continued. It should check itself for sufficient conditions to work.
 */
#define THROW(EXCEPTION, STRING, VAL1, VAL2) { if(_thCxt == null) { _thCxt = getCurrent_ThreadContext_emC(); } \
  _thCxt->exc.exceptionNr = nr_##EXCEPTION##Jc; _thCxt->exc.exceptionValue = VAL1; \
  _thCxt->exc.file = __FILE__; _thCxt->exc.line = __LINE__; \
  logSimple_ExceptionJc(nr_##EXCEPTION##Jc, VAL1, VAL2, __FILE__, __LINE__); \
}


#define THROW_s0(EXCEPTION, TEXT, VAL1, VAL2) { if(_thCxt == null) { _thCxt = getCurrent_ThreadContext_emC(); } \
  _thCxt->exc.exceptionNr = nr_##EXCEPTION##Jc; _thCxt->exc.exceptionValue = VAL1; \
  _thCxt->exc.file = __FILE__; _thCxt->exc.line = __LINE__; \
  logSimple_ExceptionJc(nr_##EXCEPTION##Jc, VAL1, VAL2, __FILE__, __LINE__); \
}


#define printStackTrace_ExceptionJc(ythis, _thCxt)
#define printStackTrace_P_ExceptionJc(ythis, out, _thCxt)
#define printStackTraceFile_ExceptionJc(ythis, out, _thCxt)
#define getMessage_ExceptionJc(YTHIS, THC) ((YTHIS)->exceptionMsg)




#endif //__fw_ExcStacktrcNo_h__
