
/*This file is generated from Header2Reflection. */
#define protected public  //only active inside this compilation unit
#define private public    //  to enable the access to all elements.
#include <Jc/ReflectionJc.h>
#include <stddef.h>
#include "emC/Formatter.h"


extern_C const ClassJc reflection_ParseResultPrintfStyle_fwFormatter;  //the just defined reflection_
const struct Reflection_Fields_ParseResultPrintfStyle_fwFormatter_t
{ ObjectArrayJc head;
  FieldJc data[10];
} reflection_Fields_ParseResultPrintfStyle_fwFormatter =
{ CONST_ObjectArrayJc(FieldJc, 10, OBJTYPE_FieldJc, null, &reflection_Fields_ParseResultPrintfStyle_fwFormatter)
, {
    { "text-specifier"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->text.specifier) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "text-dummy"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->text.dummy) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "text-nrofChars"
    , 0   //no Array, no Bitfield
    , REFLECTION_int16
    , (2<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->text.nrofChars) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "text-text"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc)| mReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->text.text) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "value-specifier"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->value.specifier) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "value-argument"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->value.argument) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "value-width"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->value.width) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "value-precision"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->value.precision) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "value-indexArg"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->value.indexArg) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
  , { "value-timeSpecifier"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ParseResultPrintfStyle_fwFormatter*)(0x1000))->value.timeSpecifier) -(int32)(ParseResultPrintfStyle_fwFormatter*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ParseResultPrintfStyle_fwFormatter
    }
} };


const ClassJc reflection_ParseResultPrintfStyle_fwFormatter =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ParseResultPrintfStyle_fwFormatter, &reflection_ClassJc)
, "ParseResultPr_Style_fwFormatter"
, 0
, sizeof(ParseResultPrintfStyle_fwFormatter)
, (FieldJcArray const*)&reflection_Fields_ParseResultPrintfStyle_fwFormatter  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};



#include "emC/LogMessage.h"


extern_C const ClassJc reflection_LogMessageFW_s;  //the just defined reflection_
extern_C const ClassJc reflection_ObjectJc;
const struct Reflection_Fields_LogMessageFW_s_t
{ ObjectArrayJc head;
  FieldJc data[1];
} reflection_Fields_LogMessageFW_s =
{ CONST_ObjectArrayJc(FieldJc, 1, OBJTYPE_FieldJc, null, &reflection_Fields_LogMessageFW_s)
, {
    { "base-object"
    , 0   //no Array, no Bitfield
    , &reflection_ObjectJc
    , 0 //bitModifiers
    , (int16)((int32)(&((LogMessageFW_s*)(0x1000))->base.object) -(int32)(LogMessageFW_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_LogMessageFW_s
    }
} };


const ClassJc reflection_LogMessageFW_s =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_LogMessageFW_s, &reflection_ClassJc)
, "LogMessageFW_s"
, 0
, sizeof(LogMessageFW_s)
, (FieldJcArray const*)&reflection_Fields_LogMessageFW_s  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0  |mObjectJc_Modifier_reflectJc
};



#include "emC/MemC_emC.h"

#include "emC/Readline.h"


extern_C const ClassJc reflection_ReadLine_emC;  //the just defined reflection_
const struct Reflection_Fields_ReadLine_emC_t
{ ObjectArrayJc head;
  FieldJc data[5];
} reflection_Fields_ReadLine_emC =
{ CONST_ObjectArrayJc(FieldJc, 5, OBJTYPE_FieldJc, null, &reflection_Fields_ReadLine_emC)
, {
    { "file"
    , 0   //no Array, no Bitfield
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ReadLine_emC*)(0x1000))->file) -(int32)(ReadLine_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ReadLine_emC
    }
  , { "endOfFile"
    , 0   //no Array, no Bitfield
    , REFLECTION_bool
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ReadLine_emC*)(0x1000))->endOfFile) -(int32)(ReadLine_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ReadLine_emC
    }
  , { "buffer"
    , 4096   //nrofArrayElements
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) |kStaticArray_Modifier_reflectJc|kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ReadLine_emC*)(0x1000))->buffer) -(int32)(ReadLine_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ReadLine_emC
    }
  , { "posBuffer"
    , 0   //no Array, no Bitfield
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ReadLine_emC*)(0x1000))->posBuffer) -(int32)(ReadLine_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ReadLine_emC
    }
  , { "endBuffer"
    , 0   //no Array, no Bitfield
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((ReadLine_emC*)(0x1000))->endBuffer) -(int32)(ReadLine_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ReadLine_emC
    }
} };


const ClassJc reflection_ReadLine_emC =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ReadLine_emC, &reflection_ClassJc)
, "ReadLine_emC"
, 0
, sizeof(ReadLine_emC)
, (FieldJcArray const*)&reflection_Fields_ReadLine_emC  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};



#include "emC/SimpleC_emC.h"


extern_C const ClassJc reflection_U_intfloat;  //the just defined reflection_
const struct Reflection_Fields_U_intfloat_t
{ ObjectArrayJc head;
  FieldJc data[2];
} reflection_Fields_U_intfloat =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_U_intfloat)
, {
    { "f"
    , 0   //no Array, no Bitfield
    , REFLECTION_float
    , (4<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((U_intfloat*)(0x1000))->f) -(int32)(U_intfloat*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_U_intfloat
    }
  , { "i"
    , 0   //no Array, no Bitfield
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((U_intfloat*)(0x1000))->i) -(int32)(U_intfloat*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_U_intfloat
    }
} };


const ClassJc reflection_U_intfloat =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_U_intfloat, &reflection_ClassJc)
, "U_intfloat"
, 0
, sizeof(U_intfloat)
, (FieldJcArray const*)&reflection_Fields_U_intfloat  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};




extern_C const ClassJc reflection_U_ptr;  //the just defined reflection_
const struct Reflection_Fields_U_ptr_t
{ ObjectArrayJc head;
  FieldJc data[3];
} reflection_Fields_U_ptr =
{ CONST_ObjectArrayJc(FieldJc, 3, OBJTYPE_FieldJc, null, &reflection_Fields_U_ptr)
, {
    { "f"
    , 0   //no Array, no Bitfield
    , REFLECTION_float
    , (4<<kBitPrimitiv_Modifier_reflectJc)| mReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((U_ptr*)(0x1000))->f) -(int32)(U_ptr*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_U_ptr
    }
  , { "i"
    , 0   //no Array, no Bitfield
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc)| mReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((U_ptr*)(0x1000))->i) -(int32)(U_ptr*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_U_ptr
    }
  , { "addr"
    , 0   //no Array, no Bitfield
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((U_ptr*)(0x1000))->addr) -(int32)(U_ptr*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_U_ptr
    }
} };


const ClassJc reflection_U_ptr =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_U_ptr, &reflection_ClassJc)
, "U_ptr"
, 0
, sizeof(U_ptr)
, (FieldJcArray const*)&reflection_Fields_U_ptr  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};




extern_C const ClassJc reflection_Int32Array256;  //the just defined reflection_
const struct Reflection_Fields_Int32Array256_t
{ ObjectArrayJc head;
  FieldJc data[1];
} reflection_Fields_Int32Array256 =
{ CONST_ObjectArrayJc(FieldJc, 1, OBJTYPE_FieldJc, null, &reflection_Fields_Int32Array256)
, {
    { "data"
    , 256   //nrofArrayElements
    , REFLECTION_int32
    , (4<<kBitPrimitiv_Modifier_reflectJc) |kStaticArray_Modifier_reflectJc|kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((Int32Array256*)(0x1000))->data) -(int32)(Int32Array256*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_Int32Array256
    }
} };


const ClassJc reflection_Int32Array256 =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_Int32Array256, &reflection_ClassJc)
, "Int32Array256"
, 0
, sizeof(Int32Array256)
, (FieldJcArray const*)&reflection_Fields_Int32Array256  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};




extern_C const ClassJc reflection_FloatArray256;  //the just defined reflection_
const struct Reflection_Fields_FloatArray256_t
{ ObjectArrayJc head;
  FieldJc data[1];
} reflection_Fields_FloatArray256 =
{ CONST_ObjectArrayJc(FieldJc, 1, OBJTYPE_FieldJc, null, &reflection_Fields_FloatArray256)
, {
    { "data"
    , 256   //nrofArrayElements
    , REFLECTION_float
    , (4<<kBitPrimitiv_Modifier_reflectJc) |kStaticArray_Modifier_reflectJc|kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((FloatArray256*)(0x1000))->data) -(int32)(FloatArray256*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_FloatArray256
    }
} };


const ClassJc reflection_FloatArray256 =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_FloatArray256, &reflection_ClassJc)
, "FloatArray256"
, 0
, sizeof(FloatArray256)
, (FieldJcArray const*)&reflection_Fields_FloatArray256  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};




extern_C const ClassJc reflection_FloatArray20;  //the just defined reflection_
const struct Reflection_Fields_FloatArray20_t
{ ObjectArrayJc head;
  FieldJc data[1];
} reflection_Fields_FloatArray20 =
{ CONST_ObjectArrayJc(FieldJc, 1, OBJTYPE_FieldJc, null, &reflection_Fields_FloatArray20)
, {
    { "data"
    , 20   //nrofArrayElements
    , REFLECTION_float
    , (4<<kBitPrimitiv_Modifier_reflectJc) |kStaticArray_Modifier_reflectJc|kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((FloatArray20*)(0x1000))->data) -(int32)(FloatArray20*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_FloatArray20
    }
} };


const ClassJc reflection_FloatArray20 =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_FloatArray20, &reflection_ClassJc)
, "FloatArray20"
, 0
, sizeof(FloatArray20)
, (FieldJcArray const*)&reflection_Fields_FloatArray20  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};



#include "emC/timeconversions.h"


extern_C const ClassJc reflection_TimeBytes_emC;  //the just defined reflection_
const struct Reflection_Fields_TimeBytes_emC_t
{ ObjectArrayJc head;
  FieldJc data[7];
} reflection_Fields_TimeBytes_emC =
{ CONST_ObjectArrayJc(FieldJc, 7, OBJTYPE_FieldJc, null, &reflection_Fields_TimeBytes_emC)
, {
    { "year"
    , 0   //no Array, no Bitfield
    , REFLECTION_int16
    , (2<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->year) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
  , { "month"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->month) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
  , { "day"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->day) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
  , { "hour"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->hour) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
  , { "minute"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->minute) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
  , { "sec"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->sec) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
  , { "weekInYear"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((TimeBytes_emC*)(0x1000))->weekInYear) -(int32)(TimeBytes_emC*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_TimeBytes_emC
    }
} };


const ClassJc reflection_TimeBytes_emC =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_TimeBytes_emC, &reflection_ClassJc)
, "TimeBytes_emC"
, 0
, sizeof(TimeBytes_emC)
, (FieldJcArray const*)&reflection_Fields_TimeBytes_emC  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};



#include "emC/Va_list_emC.h"


extern_C const ClassJc reflection_Va_listFW;  //the just defined reflection_
const struct Reflection_Fields_Va_listFW_t
{ ObjectArrayJc head;
  FieldJc data[2];
} reflection_Fields_Va_listFW =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_Va_listFW)
, {
    { "typeArgs"
    , 0   //no Array, no Bitfield
    , REFLECTION_int8
    , (1<<kBitPrimitiv_Modifier_reflectJc)| mReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((Va_listFW*)(0x1000))->typeArgs) -(int32)(Va_listFW*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_Va_listFW
    }
  , { "args"
    , 0   //no Array, no Bitfield
    , REFLECTION_void
    , (8<<kBitPrimitiv_Modifier_reflectJc) //bitModifiers
    , (int16)((int32)(&((Va_listFW*)(0x1000))->args) -(int32)(Va_listFW*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_Va_listFW
    }
} };


const ClassJc reflection_Va_listFW =
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_Va_listFW, &reflection_ClassJc)
, "Va_listFW"
, 0
, sizeof(Va_listFW)
, (FieldJcArray const*)&reflection_Fields_Va_listFW  //attributes and associations
, null  //method
, null  //superclass
, null  //interfaces
, 0 
};


