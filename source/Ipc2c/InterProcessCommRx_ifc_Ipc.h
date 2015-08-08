/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __Ipc2c_InterProcessCommRx_ifc_Ipc_h__
#define __Ipc2c_InterProcessCommRx_ifc_Ipc_h__

#include "Fwc/fw_MemC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: includes *********************************************************/


/*@CLASS_C InterProcessCommRx_ifc_Ipc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct InterProcessCommRx_ifc_Ipc_t
{ 
  union { ObjectJc object; } base; 
} InterProcessCommRx_ifc_Ipc_s;
  

#define sizeof_InterProcessCommRx_ifc_Ipc_s sizeof(InterProcessCommRx_ifc_Ipc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef InterProcessCommRx_ifc_IpcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define InterProcessCommRx_ifc_IpcREFDEF
  struct InterProcessCommRx_ifc_Ipc_t;
  DEFINE_EnhancedRefJc(InterProcessCommRx_ifc_Ipc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct InterProcessCommRx_ifc_Ipc_X_t { ObjectArrayJc head; InterProcessCommRx_ifc_IpcREF data[50]; } InterProcessCommRx_ifc_Ipc_X;
typedef struct InterProcessCommRx_ifc_Ipc_Y_t { ObjectArrayJc head; InterProcessCommRx_ifc_Ipc_s data[50]; } InterProcessCommRx_ifc_Ipc_Y;

 extern_C struct ClassJc_t const reflection_InterProcessCommRx_ifc_Ipc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_InterProcessCommRx_ifc_Ipc(OBJP) { CONST_ObjectJc(sizeof(InterProcessCommRx_ifc_Ipc_s), OBJP, &reflection_InterProcessCommRx_ifc_Ipc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_InterProcessCommRx_ifc_Ipc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern StringJc version_InterProcessCommRx_ifc_Ipc;   /*Version, history and license.*/


typedef void MT_execRxData_InterProcessCommRx_ifc_Ipc(ObjectJc* ithis, PtrVal_int8 buffer, int32 nrofBytesReceived, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void execRxData_InterProcessCommRx_ifc_Ipc(ObjectJc* ithis, PtrVal_int8 buffer, int32 nrofBytesReceived, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_InterProcessCommRx_ifc_Ipc[]; //marker for methodTable check
typedef struct Mtbl_InterProcessCommRx_ifc_Ipc_t
{ MtblHeadJc head;
  MT_execRxData_InterProcessCommRx_ifc_Ipc* execRxData;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_InterProcessCommRx_ifc_Ipc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class InterProcessCommRx_ifc_Ipc : private InterProcessCommRx_ifc_Ipc_s
{ public:

  virtual void execRxData(PtrVal_int8 buffer, int32 nrofBytesReceived)=0;
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__Ipc2c_InterProcessCommRx_ifc_Ipc_h__
