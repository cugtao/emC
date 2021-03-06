/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __InspcJ2c_WorkingThread_Inspc_h__
#define __InspcJ2c_WorkingThread_Inspc_h__

#include "emC/MemC_emC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct C_theThreadRun_WorkingThread_Inspc_t;
struct Data_WorkingThread_Inspc_t;
struct ThreadMng_WorkingThread_Inspc_t;
struct WorkingThread_Inspc_t;


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef ThreadMng_WorkingThread_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define ThreadMng_WorkingThread_InspcREFDEF
  struct ThreadMng_WorkingThread_Inspc_t;
  typedef TYPE_EnhancedRefJc(ThreadMng_WorkingThread_Inspc);
#endif


/* J2C: includes *********************************************************/
#include "Jc/ThreadJc.h"  //interface


/*@CLASS_C C_theThreadRun_WorkingThread_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct C_theThreadRun_WorkingThread_Inspc_t
{ 
  union { ObjectJc object; RunnableJc_s RunnableJc;} base; 
  struct WorkingThread_Inspc_t* outer;  //J2C: Reference to outer class, implicit in Java
} C_theThreadRun_WorkingThread_Inspc_s;
  

#define sizeof_C_theThreadRun_WorkingThread_Inspc_s sizeof(C_theThreadRun_WorkingThread_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef C_theThreadRun_WorkingThread_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define C_theThreadRun_WorkingThread_InspcREFDEF
  struct C_theThreadRun_WorkingThread_Inspc_t;
  typedef TYPE_EnhancedRefJc(C_theThreadRun_WorkingThread_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct C_theThreadRun_WorkingThread_Inspc_X_t { ObjectArrayJc head; C_theThreadRun_WorkingThread_InspcREF data[50]; } C_theThreadRun_WorkingThread_Inspc_X;
typedef struct C_theThreadRun_WorkingThread_Inspc_Y_t { ObjectArrayJc head; C_theThreadRun_WorkingThread_Inspc_s data[50]; } C_theThreadRun_WorkingThread_Inspc_Y;

 extern_C struct ClassJc_t const reflection_C_theThreadRun_WorkingThread_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_C_theThreadRun_WorkingThread_Inspc(OBJP) { CONST_ObjectJc(sizeof(C_theThreadRun_WorkingThread_Inspc_s), OBJP, &reflection_C_theThreadRun_WorkingThread_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_C_theThreadRun_WorkingThread_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void run_C_theThreadRun_WorkingThread_Inspc_F(ObjectJc* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void run_C_theThreadRun_WorkingThread_Inspc(ObjectJc* ithis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_C_theThreadRun_WorkingThread_Inspc[]; //marker for methodTable check
typedef struct Mtbl_C_theThreadRun_WorkingThread_Inspc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_RunnableJc RunnableJc;
} Mtbl_C_theThreadRun_WorkingThread_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class C_theThreadRun_WorkingThread_Inspc : private C_theThreadRun_WorkingThread_Inspc_s
{ public:

  virtual void run(){ run_C_theThreadRun_WorkingThread_Inspc_F(&this->base.RunnableJc.base.object,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/


/**Default constructor. */
METHOD_C struct C_theThreadRun_WorkingThread_Inspc_t* ctorO_C_theThreadRun_WorkingThread_Inspc(struct WorkingThread_Inspc_t* outer, ObjectJc* othis, ThCxt* _thCxt);


/*@CLASS_C Data_WorkingThread_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct Data_WorkingThread_Inspc_t
{ 
  union { ObjectJc object; } base; 
  int32 dw;   /*Increase of a angle in the step time. It determines the frequency of output signals.*/
  int32 ww;   /*An turning angle in the step time. The angles value represents the float-range -Math.PI to Math.PI*/
  float wFloat;   /*The angle converted to float. */
  float ySin;   /*Some sine-frequency-values. */
  float ySin2;   /*Some sine-frequency-values. */
  float ySin3;   /*Some sine-frequency-values. */
  float yCos;   /*Some sine-frequency-values. */
  float yOut1;   /*Addition of sinus of 1, 2x and 3x frequence.*/
} Data_WorkingThread_Inspc_s;
  

#define sizeof_Data_WorkingThread_Inspc_s sizeof(Data_WorkingThread_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef Data_WorkingThread_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define Data_WorkingThread_InspcREFDEF
  struct Data_WorkingThread_Inspc_t;
  typedef TYPE_EnhancedRefJc(Data_WorkingThread_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct Data_WorkingThread_Inspc_X_t { ObjectArrayJc head; Data_WorkingThread_InspcREF data[50]; } Data_WorkingThread_Inspc_X;
typedef struct Data_WorkingThread_Inspc_Y_t { ObjectArrayJc head; Data_WorkingThread_Inspc_s data[50]; } Data_WorkingThread_Inspc_Y;

 extern_C struct ClassJc_t const reflection_Data_WorkingThread_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_Data_WorkingThread_Inspc(OBJP) { CONST_ObjectJc(sizeof(Data_WorkingThread_Inspc_s), OBJP, &reflection_Data_WorkingThread_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_Data_WorkingThread_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct Data_WorkingThread_Inspc_t* ctorO_Data_WorkingThread_Inspc(ObjectJc* othis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_Data_WorkingThread_Inspc[]; //marker for methodTable check
typedef struct Mtbl_Data_WorkingThread_Inspc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_Data_WorkingThread_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class Data_WorkingThread_Inspc : private Data_WorkingThread_Inspc_s
{ public:

  Data_WorkingThread_Inspc(){ init_ObjectJc(&this->base.object, sizeof(Data_WorkingThread_Inspc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_Data_WorkingThread_Inspc_s, 0); ctorO_Data_WorkingThread_Inspc(&this->base.object,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C ThreadMng_WorkingThread_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct ThreadMng_WorkingThread_Inspc_t
{ 
  union { ObjectJc object; } base; 
  struct WorkingThread_Inspc_t* outer;  //J2C: Reference to outer class, implicit in Java
  bool bRun;   /*True while it runs, set false to terminate the thread.*/
  ThreadJc_s thread; 
} ThreadMng_WorkingThread_Inspc_s;
  

#define sizeof_ThreadMng_WorkingThread_Inspc_s sizeof(ThreadMng_WorkingThread_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef ThreadMng_WorkingThread_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define ThreadMng_WorkingThread_InspcREFDEF
  struct ThreadMng_WorkingThread_Inspc_t;
  typedef TYPE_EnhancedRefJc(ThreadMng_WorkingThread_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct ThreadMng_WorkingThread_Inspc_X_t { ObjectArrayJc head; ThreadMng_WorkingThread_InspcREF data[50]; } ThreadMng_WorkingThread_Inspc_X;
typedef struct ThreadMng_WorkingThread_Inspc_Y_t { ObjectArrayJc head; ThreadMng_WorkingThread_Inspc_s data[50]; } ThreadMng_WorkingThread_Inspc_Y;

 extern_C struct ClassJc_t const reflection_ThreadMng_WorkingThread_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_ThreadMng_WorkingThread_Inspc(OBJP) { CONST_ObjectJc(sizeof(ThreadMng_WorkingThread_Inspc_s), OBJP, &reflection_ThreadMng_WorkingThread_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_ThreadMng_WorkingThread_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct ThreadMng_WorkingThread_Inspc_t* ctorO_ThreadMng_WorkingThread_Inspc(struct WorkingThread_Inspc_t* outer, ObjectJc* othis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_ThreadMng_WorkingThread_Inspc[]; //marker for methodTable check
typedef struct Mtbl_ThreadMng_WorkingThread_Inspc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_ThreadMng_WorkingThread_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class ThreadMng_WorkingThread_Inspc : private ThreadMng_WorkingThread_Inspc_s
{ public:
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C WorkingThread_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct WorkingThread_Inspc_t
{ 
  union { ObjectJc object; } base; 
  Data_WorkingThread_Inspc_s data; 
  C_theThreadRun_WorkingThread_Inspc_s theThreadRun;   /*The thread functionality.*/
  ThreadMng_WorkingThread_InspcREF theThreadMng; 
} WorkingThread_Inspc_s;
  

#define sizeof_WorkingThread_Inspc_s sizeof(WorkingThread_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef WorkingThread_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define WorkingThread_InspcREFDEF
  struct WorkingThread_Inspc_t;
  typedef TYPE_EnhancedRefJc(WorkingThread_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct WorkingThread_Inspc_X_t { ObjectArrayJc head; WorkingThread_InspcREF data[50]; } WorkingThread_Inspc_X;
typedef struct WorkingThread_Inspc_Y_t { ObjectArrayJc head; WorkingThread_Inspc_s data[50]; } WorkingThread_Inspc_Y;

 extern_C struct ClassJc_t const reflection_WorkingThread_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_WorkingThread_Inspc(OBJP) { CONST_ObjectJc(sizeof(WorkingThread_Inspc_s), OBJP, &reflection_WorkingThread_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_WorkingThread_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




METHOD_C struct WorkingThread_Inspc_t* ctorO_WorkingThread_Inspc(ObjectJc* othis, ThCxt* _thCxt);

/**Start of the thread, should be called initially if the application is built completely. */
typedef void MT_start_WorkingThread_Inspc(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void start_WorkingThread_Inspc_F(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void start_WorkingThread_Inspc(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);

/**Terminate the thread for ever, should be called on termination of the application.
*/
typedef void MT_terminate_WorkingThread_Inspc(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void terminate_WorkingThread_Inspc_F(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void terminate_WorkingThread_Inspc(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);

METHOD_C void step_WorkingThread_Inspc(WorkingThread_Inspc_s* thiz, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_WorkingThread_Inspc[]; //marker for methodTable check
typedef struct Mtbl_WorkingThread_Inspc_t
{ MtblHeadJc head;
  MT_start_WorkingThread_Inspc* start;
  MT_terminate_WorkingThread_Inspc* terminate;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_WorkingThread_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class WorkingThread_Inspc : private WorkingThread_Inspc_s
{ public:

  WorkingThread_Inspc(){ init_ObjectJc(&this->base.object, sizeof(WorkingThread_Inspc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_WorkingThread_Inspc_s, 0); ctorO_WorkingThread_Inspc(&this->base.object,  null/*_thCxt*/); }

  virtual void start(){ start_WorkingThread_Inspc_F(this,  null/*_thCxt*/); }

  void step(){ step_WorkingThread_Inspc(this,  null/*_thCxt*/); }

  virtual void terminate(){ terminate_WorkingThread_Inspc_F(this,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__InspcJ2c_WorkingThread_Inspc_h__
