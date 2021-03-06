/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "J1c/StringFunctions_BJc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept
#include "J1c/StringFunctionsJc.h"  //reference-association: StringFunctionsJc_s
#include "Jc/ObjectJc.h"  //reference-association: IntegerJc
#include "Jc/StringJc.h"  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/
struct StringBuilderJc_t;


const char sign_Mtbl_StringFunctions_BJc[] = "StringFunctions_BJc"; //to mark method tables of all implementations

typedef struct MtblDef_StringFunctions_BJc_t { Mtbl_StringFunctions_BJc mtbl; MtblHeadJc end; } MtblDef_StringFunctions_BJc;
 extern MtblDef_StringFunctions_BJc const mtblStringFunctions_BJc;
StringJc version_StringFunctions_BJc = CONST_z_StringJc("2015-11-07"); //J2C:static StringJc
StringJc sWhiteSpaces_StringFunctions_BJc = CONST_z_StringJc(" \r\n\t\f"); //J2C:static StringJc

/*Constructor *//**J2C: autogenerated as default constructor. */
struct StringFunctions_BJc_t* ctorO_StringFunctions_BJc(ObjectJc* othis, ThCxt* _thCxt)
{ StringFunctions_BJc_s* thiz = (StringFunctions_BJc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_StringFunctions_BJc");
  checkConsistence_ObjectJc(othis, sizeof(StringFunctions_BJc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_StringFunctions_BJc_s, sizeof(StringFunctions_BJc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}



/**Returns the first line of any text.*/
StringJc firstLine_StringFunctions_BJc(/*J2C:static method*/ CharSeqJc src, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("firstLine_StringFunctions_BJc");
  
  { 
    CharSeqJc _temp2_1; /*J2C: temporary references for concatenation */
    
    if(src.ref== null) { STACKTRC_LEAVE;
      return s0_StringJc("");
    }
    
    int32  pos = indexOfAnyChar_StringFunctionsJc(/*J2C:static method call*/src, 0, MAX_VALUE_IntegerJc, z_StringJc("\n\r"), _thCxt);
    if(pos < 0) 
    { 
      
      pos = length_CharSeqJc(src/*J1cT2*/, _thCxt);
    }
    { STACKTRC_LEAVE;
      return 
      ( _temp2_1= subSequence_CharSeqJc(src/*J1cT2*/, 0, pos, _thCxt)
      , toString_CharSeqJc(_temp2_1/*J1cT2*/)
      );
    }
  }
  STACKTRC_LEAVE;
}


/**Cleans a text which may be parsed or such, remove undesired indentation and replace the line end characters. */
CharSeqJc removeIndentReplaceNewline_StringFunctions_BJc(/*J2C:static method*/ CharSeqJc src, int32 indent, StringJc indentChars, int32 tabSize, StringJc sNewline, bool bSkipSpaces, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("removeIndentReplaceNewline_StringFunctions_BJc");
  
  { 
    
    
    int32  zText = length_CharSeqJc(src/*J1cT2*/, _thCxt);
    
    char  cEnd = '\n';
    
    int32  posEnd1 = indexOf_Csci_StringFunctionsJc(/*J2C:static method call*/src, cEnd, 0, _thCxt);
    
    int32  posEnd2 = indexOf_Csci_StringFunctionsJc(/*J2C:static method call*/src, '\r', 0, _thCxt);
    if(posEnd1 < 0 && posEnd2 < 0 && (!bSkipSpaces || zText > 0 && indexOf_C_StringJc(sWhiteSpaces_StringFunctions_BJc, charAt_CharSeqJc(src/*J1cT2*/, 0, _thCxt)) < 0)) 
    { 
      
      { STACKTRC_LEAVE;
        return src;
      }/*not necessary to process*/
      
    }
    else 
    { 
      ObjectJc *newObj3_1=null; /*J2C: temporary Objects for new operations
      */
      
      struct StringBuilderJc_t*  b = ctorO_I_StringBuilderJc(/*J2C:static method call*/(newObj3_1 = alloc_ObjectJc(sizeof_StringBuilderJc, 0, _thCxt)), zText, _thCxt);
      
      bool  bSkipSpaces1 = bSkipSpaces;
      
      int32  posLine = 0;
      do 
        { 
          
          posEnd1 = indexOf_Csci_StringFunctionsJc(/*J2C:static method call*/src, cEnd, posLine, _thCxt);
          posEnd2 = indexOf_Csci_StringFunctionsJc(/*J2C:static method call*/src, '\r', posLine, _thCxt);/*a \r\n (Windows standard) or only \r (Macintosh standard) in the script is the end of line too.*/
          
          if(posEnd2 >= 0 && (posEnd2 < posEnd1 || posEnd1 < 0)) 
          { 
            
            posEnd1 = posEnd2;/* \r found before \n*/
            
            cEnd = '\r';
          }
          if(posEnd1 >= 0) 
          { 
            
            if(bSkipSpaces1) 
            { 
              
              
              while(posLine < posEnd1 && indexOf_C_StringJc(sWhiteSpaces_StringFunctions_BJc, charAt_CharSeqJc(src/*J1cT2*/, posLine, _thCxt)) >= 0)
                { 
                  
                  posLine += 1;
                }
              if(posLine < posEnd1) 
              { /*:anything found in the line:*/
                
                
                bSkipSpaces1 = false;
              }
            }
            if(posLine < posEnd1) 
            { 
              
              append_c_StringBuilderJc(b, subSequence_CharSeqJc(src/*J1cT2*/, posLine, posEnd1, _thCxt), _thCxt);
            }
            if(!bSkipSpaces1) 
            { /*:don't append a newline if skipSpaces is still active. Then only spaces were found.*/
              
              
              append_c_StringBuilderJc(b, sNewline, _thCxt);/*use the newline from argument.*/
              
            }/*skip over posEnd1, skip over the other end line character if found. */
            
            if(++posEnd1 < zText) 
            { 
              
              if(cEnd == '\r') 
              { 
                
                if(charAt_CharSeqJc(src/*J1cT2*/, posEnd1, _thCxt) == '\n') 
                { 
                  
                  posEnd1 += 1;
                }
              }/*skip over both \r\n*/
              
              else 
              { 
                
                if(charAt_CharSeqJc(src/*J1cT2*/, posEnd1, _thCxt) == '\r') 
                { 
                  
                  posEnd1 += 1;
                }
              }/*skip over both \n\r*/
              /*posEnd1 refers the start of the next line.*/
              
              
              int32  indentCt = indent;
              
              char  cc = ((char)(0));
              
              while(indentCt > 0 && posEnd1 < zText && ((cc = /*? assignment*/charAt_CharSeqJc(src/*J1cT2*/, posEnd1, _thCxt)) == ' ' || cc == '\t' || indexOf_C_StringJc(indentChars, cc) >= 0))
                { 
                  
                  if(cc == '\t') 
                  { 
                    
                    indentCt -= tabSize;
                    if(indentCt >= 0) 
                    { /*:skip over '\t' only if matches to the indent.*/
                      
                      
                      posEnd1 += 1;
                    }
                  }
                  else 
                  { 
                    
                    posEnd1 += 1;/*skip over all indentation chars*/
                    
                    indentCt -= 1;
                  }
                }
              if(indexOf_C_StringJc(indentChars, cc) >= 0) 
              { /*:the last skipped char was an additional indentation char:*/
                
                
                
                while(posEnd1 < zText && charAt_CharSeqJc(src/*J1cT2*/, posEnd1, _thCxt) == cc)
                  { 
                    
                    posEnd1 += 1;/*skip over all equal indentation chars.*/
                    
                  }
              }/*line starts after :::: which starts before indentation end*/
              /*or line starts after first char which is not a space or tab*/
              
            }
            posLine = posEnd1;
          }
          else 
          { /*:the rest till end.*/
            
            
            append_c_StringBuilderJc(b, subSequence_CharSeqJc(src/*J1cT2*/, posLine, zText, _thCxt), _thCxt);
          }
        }while(posEnd1 >= 0);/*output all lines.*/
      
      { STACKTRC_LEAVE;
        activateGC_ObjectJc(newObj3_1, b, _thCxt);
        return fromStringBuilderJc_CharSeqJc(b);
      }
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_StringFunctions_BJc mtblStringFunctions_BJc = {
{ { sign_Mtbl_StringFunctions_BJc //J2C: Head of methodtable of StringFunctions_BJc
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
 static struct superClasses_StringFunctions_BJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_StringFunctions_BJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_StringFunctions_BJc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const reflection_StringFunctions_BJc_s;
extern_C struct ClassJc_t const reflection_StringJc;
const struct Reflection_Fields_StringFunctions_BJc_s_t
{ ObjectArrayJc head; FieldJc data[2];
} reflection_Fields_StringFunctions_BJc_s =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_StringFunctions_BJc_s)
, {
     { "version"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_StringFunctions_BJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&version_StringFunctions_BJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_StringFunctions_BJc_s
    }
   , { "sWhiteSpaces"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&sWhiteSpaces_StringFunctions_BJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&sWhiteSpaces_StringFunctions_BJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_StringFunctions_BJc_s
    }
} };
const ClassJc reflection_StringFunctions_BJc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "StringFunctions_BJc_s"
,  0 //position of ObjectJc
, sizeof(StringFunctions_BJc_s)
, (FieldJc_Y const*)&reflection_Fields_StringFunctions_BJc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_StringFunctions_BJc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblStringFunctions_BJc.mtbl.head
};
