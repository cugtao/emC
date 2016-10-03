/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "InspcJ2c/InspcDataInfo_Inspc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept


/* J2C: Forward declaration of struct ***********************************************/

/**This class contains the description to access to one variable in memory
to get a value not by path but by a handle. The structure stores the type, memory address
and some access info. In Java the memory address is the Object reference where the Field is located.
In C it is adapted in the same kind to support Java2C-translation.
<br><br>
Note that this struct in C should be used less memory because it is an array element of a large array (1024..4096). 
Note that the length of integer should regard 4-byte-boundary for special processors which does not support a integer on any boundary.
@author Hartmut Schorrig

*/


const char sign_Mtbl_InspcDataInfo_Inspc[] = "InspcDataInfo_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_InspcDataInfo_Inspc_t { Mtbl_InspcDataInfo_Inspc mtbl; MtblHeadJc end; } MtblDef_InspcDataInfo_Inspc;
 extern MtblDef_InspcDataInfo_Inspc const mtblInspcDataInfo_Inspc;

/*Constructor *//**J2C: autogenerated as default constructor. */
struct InspcDataInfo_Inspc_t* ctorO_InspcDataInfo_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ InspcDataInfo_Inspc_s* thiz = (InspcDataInfo_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_InspcDataInfo_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(InspcDataInfo_Inspc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_InspcDataInfo_Inspc_s, sizeof(InspcDataInfo_Inspc_s));  
  //j2c: Initialize all class variables:
  {
    //J2C: constructor for embedded element
      INIT_MemSegmJc(/*J2C:static method call*/thiz->addr);
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}




/**J2C: Reflections and Method-table *************************************************/
const MtblDef_InspcDataInfo_Inspc mtblInspcDataInfo_Inspc = {
{ { sign_Mtbl_InspcDataInfo_Inspc //J2C: Head of methodtable of InspcDataInfo_Inspc
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: The superclass's methodtable: 
, { { sign_Mtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :ObjectJc:
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern_C struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_InspcDataInfo_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_InspcDataInfo_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_InspcDataInfo_Inspc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const reflection_InspcDataInfo_Inspc_s;
extern_C struct ClassJc_t const reflection_FieldJc;
extern_C struct ClassJc_t const reflection_MemSegmJc;
const struct Reflection_Fields_InspcDataInfo_Inspc_s_t
{ ObjectArrayJc head; FieldJc data[8];
} reflection_Fields_InspcDataInfo_Inspc_s =
{ CONST_ObjectArrayJc(FieldJc, 8, OBJTYPE_FieldJc, null, &reflection_Fields_InspcDataInfo_Inspc_s)
, {
     { "lastUsed"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->lastUsed) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "addr"
    , 0 //nrofArrayElements
    , &reflection_MemSegmJc
    , kEmbedded_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->addr) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "reflectionField"
    , 0 //nrofArrayElements
    , &reflection_FieldJc
    , kReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->reflectionField) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "sizeofValue"
    , 0 //nrofArrayElements
    , REFLECTION_int8
    , 1 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->sizeofValue) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "typeValue"
    , 0 //nrofArrayElements
    , REFLECTION_int8
    , 1 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->typeValue) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "lengthData"
    , 0 //nrofArrayElements
    , REFLECTION_int16
    , 2 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->lengthData) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "check"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->check) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
   , { "secondOfCreation"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InspcDataInfo_Inspc_s*)(0x1000))->secondOfCreation) - (int32)(InspcDataInfo_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InspcDataInfo_Inspc_s
    }
} };
const ClassJc reflection_InspcDataInfo_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "InspcDataInfo_Inspc_s"
,  0 //position of ObjectJc
, sizeof(InspcDataInfo_Inspc_s)
, (FieldJc_Y const*)&reflection_Fields_InspcDataInfo_Inspc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_InspcDataInfo_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblInspcDataInfo_Inspc.mtbl.head
};
