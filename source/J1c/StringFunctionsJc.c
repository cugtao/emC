/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "J1c/StringFunctionsJc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept
#include "Jc/MathJc.h"  //reference-association: MathJc_s
#include "Jc/ObjectJc.h"  //reference-association: IntegerJc
#include "Jc/StringJc.h"  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/

/**This class contains static String functions without any other dependency.
In C the functions are contained in the Fwc/fw_String.c.
@author Hartmut Schorrig

*/


const char sign_Mtbl_StringFunctionsJc[] = "StringFunctionsJc"; //to mark method tables of all implementations

typedef struct MtblDef_StringFunctionsJc_t { Mtbl_StringFunctionsJc mtbl; MtblHeadJc end; } MtblDef_StringFunctionsJc;
 extern MtblDef_StringFunctionsJc const mtblStringFunctionsJc;
StringJc version_StringFunctionsJc = CONST_z_StringJc("2015-11-07");
const char cEndOfText_StringFunctionsJc = (char)(0x3);
StringJc indentString_StringFunctionsJc = CONST_z_StringJc("\n                                                                                                    ");

/*Constructor *//**J2C: autogenerated as default constructor. */
struct StringFunctionsJc_t* ctorO_StringFunctionsJc(ObjectJc* othis, ThCxt* _thCxt)
{ StringFunctionsJc_s* thiz = (StringFunctionsJc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_StringFunctionsJc");
  checkConsistence_ObjectJc(othis, sizeof(StringFunctionsJc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_StringFunctionsJc_s, sizeof(StringFunctionsJc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}


int32 indexWhitespace_StringFunctionsJc(/*static*/ CharSeqJc src, int32 start, int32 endMax, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexWhitespace_StringFunctionsJc");
  
  { 
    int32 pos; 
    int32 end; 
    char cc = 0; 
    
    
    pos = start;
    end = length_CharSeqJc(src, _thCxt);
    if(endMax > 0 && endMax < end) 
    { 
      
      end = endMax;
    }
    /*no initvalue*/
    
    while(pos < end && (cc = /*? assignment*/charAt_CharSeqJc(src, pos, _thCxt)) != ' ' && cc != '\r' && cc != '\n' && cc != '\t' && cc != '\f')
      { 
        
        pos += (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
      }
    { STACKTRC_LEAVE;
      return pos;
    }
  }
  STACKTRC_LEAVE;
}

int32 indexNoWhitespace_StringFunctionsJc(/*static*/ CharSeqJc src, int32 start, int32 endMax, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexNoWhitespace_StringFunctionsJc");
  
  { 
    int32 pos; 
    int32 end; 
    char cc = 0; 
    
    
    pos = start;
    end = length_CharSeqJc(src, _thCxt);
    if(endMax > 0 && endMax < end) 
    { 
      
      end = endMax;
    }
    /*no initvalue*/
    
    while(pos < end && ((cc = /*? assignment*/charAt_CharSeqJc(src, pos, _thCxt)) == ' ' || cc == '\r' || cc == '\n' || cc == '\t' || cc == '\f'))
      { 
        
        pos += (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
      }
    { STACKTRC_LEAVE;
      return pos;
    }
  }
  STACKTRC_LEAVE;
}


/**Searches the position of the first identifier character starting from the given position.*/
int32 indexIdentifier_StringFunctionsJc(/*static*/ CharSeqJc src, int32 start, int32 endMax, StringJc additionalStartChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexIdentifier_StringFunctionsJc");
  
  { 
    int32 pos; 
    int32 end; 
    char cc = 0; 
    
    
    pos = start;
    end = length_CharSeqJc(src, _thCxt);
    if(endMax > 0 && endMax < end) 
    { 
      
      end = endMax;
    }
    /*no initvalue*/
    
    while(pos < end && (cc = /*? assignment*/charAt_CharSeqJc(src, pos, _thCxt)) != '_' && (cc < 'A' || cc > 'Z') && (cc < 'a' || cc > 'z') && (additionalStartChars.ref== null || indexOf_C_StringJc(additionalStartChars, cc) < 0))
      { 
        
        pos += (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
      }
    { STACKTRC_LEAVE;
      return pos < end ? pos : -1;
    }
  }
  STACKTRC_LEAVE;
}


/**Returns the position after the end of an identifier.*/
int32 indexAfterIdentifier_StringFunctionsJc(/*static*/ CharSeqJc src, int32 start, int32 endMax, StringJc additionalChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexAfterIdentifier_StringFunctionsJc");
  
  { 
    int32 pos; 
    int32 end; 
    char cc = 0; 
    
    
    pos = start;
    end = length_CharSeqJc(src, _thCxt);
    if(endMax > 0 && endMax < end) 
    { 
      
      end = endMax;
    }
    /*no initvalue*/
    
    while(pos < end && ((cc = /*? assignment*/charAt_CharSeqJc(src, pos, _thCxt)) == '_' || (cc >= '0' && cc <= '9') || (cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z') || (additionalChars.ref!= null && indexOf_C_StringJc(additionalChars, cc) >= 0)))
      { 
        
        pos += (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
      }
    { STACKTRC_LEAVE;
      return pos;
    }
  }
  STACKTRC_LEAVE;
}


/**Returns the position of the end of an identifier.*/
int32 posAfterIdentifier_CsiiSS_StringFunctionsJc(/*static*/ CharSeqJc src, int32 start, int32 endMax, StringJc additionalStartChars, StringJc additionalChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("posAfterIdentifier_CsiiSS_StringFunctionsJc");
  
  { 
    int32 pos; 
    char cc; 
    
    
    pos = start;
    cc = charAt_CharSeqJc(src, pos, _thCxt);
    if(cc == '_' || (cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z') || (additionalStartChars.ref!= null && indexOf_C_StringJc(additionalStartChars, cc) >= 0)) 
    { 
      
      pos += (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
      
      while(pos < endMax && ((cc = /*? assignment*/charAt_CharSeqJc(src, pos, _thCxt)) == '_' || (cc >= '0' && cc <= '9') || (cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z') || (additionalChars.ref!= null && indexOf_C_StringJc(additionalChars, cc) >= 0)))
        { 
          
          pos += (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
        }
    }
    { STACKTRC_LEAVE;
      return pos;
    }
  }
  STACKTRC_LEAVE;
}


/**Returns the position of the end of an identifier.*/
int32 posAfterIdentifier_Csii_StringFunctionsJc(/*static*/ CharSeqJc src, int32 start, int32 endMax, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("posAfterIdentifier_Csii_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return posAfterIdentifier_CsiiSS_StringFunctionsJc(/*static*/src, start, endMax, null_StringJc, null_StringJc, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Compares two CharSequence (Strings, StringBuilder-content etc.*/
int32 comparePos_CsCs_StringFunctionsJc(/*static*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("comparePos_CsCs_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return comparePos_CsiCsii_StringFunctionsJc(/*static*/s1, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, s2, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Compares two CharSequence (Strings, StringBuilder-content etc.)*/
int32 comparePos_CsiCsii_StringFunctionsJc(/*static*/ CharSeqJc s1, int32 from1, CharSeqJc s2, int32 from2, int32 nrofChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("comparePos_CsiCsii_StringFunctionsJc");
  
  { 
    int32 i1; 
    int32 i2; 
    int32 z1; 
    int32 z2; 
    int32 zChars; 
    char c1 = 0; 
    char c2 = 0; 
    
    
    i1 = from1;
    i2 = from2;
    z1 = length_CharSeqJc(s1, _thCxt);
    z2 = length_CharSeqJc(s2, _thCxt);
    if(nrofChars == 0) { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
    }/*NOTE: following while compares at least one char*/
    
    zChars = nrofChars >= 0 ? min(/*static*/nrofChars, min(/*static*/z1 - i1, z2 - i2)) : min(/*static*/z1 - i1, z2 - i2);
    /*no initvalue*/
    /*no initvalue*/
    do 
      { 
        
        c1 = charAt_CharSeqJc(s1, i1++, _thCxt);
        c2 = charAt_CharSeqJc(s2, i2++, _thCxt);
      }while(c1 == c2 && --zChars > 0);
    if(zChars == 0) 
    { /*:all characters compared, maybe difference in length.*/
      
      
      if(i2 < z2) { STACKTRC_LEAVE;
        return -(i1 - from1 + 1);
      }/*s2 is longer, s1 is less.*/
      
      else if(i1 < z1) { STACKTRC_LEAVE;
        return i1 - from1 + 1;
      }/*positive value: s1 is greater because i1 < z2, is longer and c1==c2*/
      
      else { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
      }/*both equal, comparison to end.*/
      
    }
    else 
    { /*:not all possible characters compared, difference in character*/
      
      
      if(c1 < c2) { STACKTRC_LEAVE;
        return -(i1 - from1);
      }/*c1 !=c2, then compare the last characters. <0 because s1 is lesser.*/
      
      else { STACKTRC_LEAVE;
        return (i1 - from1);
      }/*note: == i2 - from2, s2 is lesser.*/
      
    }
  }
  STACKTRC_LEAVE;
}

bool test_StringFunctionsJc_F(StringFunctionsJc_s* thiz, StringJc s, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("test_StringFunctionsJc_F");
  
  { 
    
    if(s.ref== null) { STACKTRC_LEAVE;
      return false;
    }
    else { STACKTRC_LEAVE;
      return true;
    }
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
bool test_StringFunctionsJc(StringFunctionsJc_s* thiz, StringJc s, ThCxt* _thCxt)
{ Mtbl_StringFunctionsJc const* mtbl = (Mtbl_StringFunctionsJc const*)getMtbl_ObjectJc(&thiz->base.object, sign_Mtbl_StringFunctionsJc);
  return mtbl->test(thiz, s, _thCxt);
}


/**Compares two CharSequence (Strings, StringBuilder-content etc.*/
int32 compare_CsiCsii_StringFunctionsJc(/*static*/ CharSeqJc s1, int32 from1, CharSeqJc s2, int32 from2, int32 nrofChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("compare_CsiCsii_StringFunctionsJc");
  
  { 
    int32 i1; 
    int32 i2; 
    int32 z; 
    int32 returnEq = 0; 
    
    
    i1 = from1 - 1;
    i2 = from2 - 1;
    z = nrofChars + from1;
    returnEq = (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
    if(s1.ref== null) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)s2.ref== null ? 0 : -1;
      }
    }/*equal if both are null*/
    
    else if(s2.ref== null) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
      }
    }/*s1 is greater.*/
    /**/
    
    if(z > length_CharSeqJc(s1, _thCxt)) 
    { 
      int32 nrofChars1; 
      int32 z2; 
      
      
      z = length_CharSeqJc(s1, _thCxt);
      nrofChars1 = z - from1;
      z2 = from2 + nrofChars1;
      if(z2 == length_CharSeqJc(s2, _thCxt)) 
      { 
        
        returnEq = (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
      }/*both have the same length after shorten.*/
      
      else if(z2 > length_CharSeqJc(s2, _thCxt)) 
      { 
        int32 nrofChars2; 
        
        
        nrofChars2 = length_CharSeqJc(s2, _thCxt) - from2;
        z = from1 + nrofChars2;/*reduce length because s2*/
        
        returnEq = (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;/*returns 1 if equal because s2 is shorter*/
        
      }
      else 
      { 
        
        returnEq = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
      }/*returns -1 if equal because s1 is shorter*/
      
    }
    else if((from2 + nrofChars) > length_CharSeqJc(s2, _thCxt)) 
    { /*:s2 is shorter than the requested or adjusted length:*/
      
      
      z = (length_CharSeqJc(s2, _thCxt) - from2) + from1;
      returnEq = (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;/*returns 1 if equal because s2 is shorter*/
      
    }
    
    while(++i1 < z)
      { 
        char c1; 
        char c2; 
        
        
        c1 = charAt_CharSeqJc(s1, i1, _thCxt);
        c2 = charAt_CharSeqJc(s2, ++i2, _thCxt);
        if(c1 != c2) 
        { 
          
          if(c1 < c2) 
          { 
            
            { STACKTRC_LEAVE;
            return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
          }
          }
          else if(c1 > c2) 
          { 
            
            { STACKTRC_LEAVE;
            return (int32/*FieldData.testAndChangeAccess TODO correct?*/)1;
          }
          }
        }
      }/*all chars till z are equal.*/
      
    { STACKTRC_LEAVE;
      return returnEq;
    }
  }
  STACKTRC_LEAVE;
}


/**Compares two Strings or StringBuilder-content or any other CharSequence.*/
int32 compare_CsCs_StringFunctionsJc(/*static*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("compare_CsCs_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return compare_CsiCsii_StringFunctionsJc(/*static*/s1, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, s2, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, MAX_VALUE_IntegerJc, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Compares two charsequences*/
bool equals_CsiiCs_StringFunctionsJc(/*static*/ CharSeqJc s1, int32 from, int32 to, CharSeqJc s2, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("equals_CsiiCs_StringFunctionsJc");
  
  { 
    int32 z1; 
    int32 zz; 
    
    
    z1 = length_CharSeqJc(s1, _thCxt);
    if(s1.ref== null || s2.ref== null) 
    { 
      
      { STACKTRC_LEAVE;
        return s1.ref== null && s2.ref== null;
      }
    }/*equals is both null, else not equal*/
    
    zz = to < 0 || to > z1 ? z1 - from : to - from;
    if(zz != length_CharSeqJc(s2, _thCxt)) { STACKTRC_LEAVE;
      return false;
    }
    else 
    { 
      
      { int32 ii; 
        for(ii = 0; ii < zz; ++ii)
          { 
            
            if(charAt_CharSeqJc(s1, from + ii, _thCxt) != charAt_CharSeqJc(s2, ii, _thCxt)) { STACKTRC_LEAVE;
            return false;
          }
          }
      }
      { STACKTRC_LEAVE;
        return true;
      }
    }
  }
  STACKTRC_LEAVE;
}


/**Compares two Strings or StringBuilder-content or any other CharSequence.*/
bool equals_CsCs_StringFunctionsJc(/*static*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("equals_CsCs_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return s1.ref== null ? s2.ref== null : equals_CsiiCs_StringFunctionsJc(/*static*/s1, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, length_CharSeqJc(s1, _thCxt), s2, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence starts with a CharSequence.*/
bool startsWith_CsCs_StringFunctionsJc(/*static*/ CharSeqJc sq, CharSeqJc start, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("startsWith_CsCs_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return compare_CsiCsii_StringFunctionsJc(/*static*/sq, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, start, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, length_CharSeqJc(start, _thCxt), _thCxt) == 0;
    }
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence starts with a CharSequence.*/
bool startsWith_CsiiCs_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 from, int32 to, CharSeqJc start, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("startsWith_CsiiCs_StringFunctionsJc");
  
  { 
    int32 zstart; 
    
    
    zstart = length_CharSeqJc(start, _thCxt);
    if((to - from) < zstart) { STACKTRC_LEAVE;
      return false;
    }
    { STACKTRC_LEAVE;
      return compare_CsiCsii_StringFunctionsJc(/*static*/sq, from, start, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, zstart, _thCxt) == 0;
    }
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence ends with a CharSequence.*/
bool endsWith_StringFunctionsJc(/*static*/ CharSeqJc sq, CharSeqJc end, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("endsWith_StringFunctionsJc");
  
  { 
    int32 z; 
    
    
    z = length_CharSeqJc(end, _thCxt);
    if(z > length_CharSeqJc(sq, _thCxt)) { STACKTRC_LEAVE;
      return false;
    }
    else { STACKTRC_LEAVE;
      return compare_CsiCsii_StringFunctionsJc(/*static*/sq, length_CharSeqJc(sq, _thCxt) - z, end, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, z, _thCxt) == 0;
    }
  }
  STACKTRC_LEAVE;
}


/**Returns false if at least one char was found in text which is not a whitespace.*/
bool isEmptyOrOnlyWhitespaces_StringFunctionsJc(/*static*/ CharSeqJc text, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("isEmptyOrOnlyWhitespaces_StringFunctionsJc");
  
  { 
    char cc = 0; 
    int32 zz; 
    int32 ii = -1; 
    
    
    /*no initvalue*/
    zz = length_CharSeqJc(text, _thCxt);
    ii = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    
    while(++ii < zz)
      { 
        
        cc = charAt_CharSeqJc(text, ii, _thCxt);
        if(indexOf_C_StringJc(zI_StringJc(" \t\n\r",4), cc) < 0) 
        { 
          
          { STACKTRC_LEAVE;
          return false;
        }
        }/*other character than whitespace*/
        
      }
    { STACKTRC_LEAVE;
      return true;
    }
  }
  STACKTRC_LEAVE;
}


/**Searches the first occurrence of the given character in a CharSequence.*/
int32 indexOf_Csiic_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 fromIndex, int32 to, char ch, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_Csiic_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 max; 
    int32 ii; 
    
    
    zsq = length_CharSeqJc(sq, _thCxt);
    max = to > zsq ? zsq : to;
    ii = fromIndex - 1;
    if(fromIndex < 0) 
    { 
      
      ii = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }
    else if(fromIndex >= max) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
      }
    }
    
    while(++ii < max)
      { 
        
        if(charAt_CharSeqJc(sq, ii, _thCxt) == ch) 
        { 
          
          { STACKTRC_LEAVE;
          return ii;
        }
        }
      }
    { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Searches the first occurrence of the given Character in a CharSequence.*/
int32 indexOf_Csci_StringFunctionsJc(/*static*/ CharSeqJc sq, char ch, int32 fromIndex, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_Csci_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return indexOf_Csiic_StringFunctionsJc(/*static*/sq, fromIndex, MAX_VALUE_IntegerJc, ch, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Searches the first occurrence of the given Character in a CharSequence.*/
int32 indexOf_Csc_StringFunctionsJc(/*static*/ CharSeqJc sq, char ch, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_Csc_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return indexOf_Csiic_StringFunctionsJc(/*static*/sq, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, MAX_VALUE_IntegerJc, ch, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Searches any char inside sChars in the given Charsequence*/
int32 indexOfAnyChar_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 begin, int32 end, StringJc sChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOfAnyChar_StringFunctionsJc");
  
  { 
    int32 pos; 
    
    
    pos = begin - 1;
    
    while(++pos < end && indexOf_C_StringJc(sChars, charAt_CharSeqJc(sq, pos, _thCxt)) < 0)
      { }/*while any of char in sChars not found:*/
      
    if(pos < end || (pos == end && indexOf_C_StringJc(sChars, cEndOfText_StringFunctionsJc) >= 0)) 
    { 
      
      { STACKTRC_LEAVE;
        return pos;
      }
    }
    else { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }
  }
  STACKTRC_LEAVE;
}


/**Searches the last occurrence of the given char in a CharSequence.*/
int32 lastIndexOf_Csiic_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 from, int32 to, char ch, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("lastIndexOf_Csiic_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 ii; 
    
    
    zsq = length_CharSeqJc(sq, _thCxt);
    ii = to > zsq ? zsq : to;
    
    while(--ii >= from)
      { 
        
        if(charAt_CharSeqJc(sq, ii, _thCxt) == ch) 
        { 
          
          { STACKTRC_LEAVE;
          return ii;
        }
        }
      }
    { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Searches the last occurrence of the given char in a CharSequence.*/
int32 lastIndexOf_Csc_StringFunctionsJc(/*static*/ CharSeqJc sq, char ch, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("lastIndexOf_Csc_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return lastIndexOf_Csiic_StringFunctionsJc(/*static*/sq, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, MAX_VALUE_IntegerJc, ch, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Searches the last occurrence of the given char in a CharSequence.*/
int32 lastIndexOfAnyChar_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 from, int32 to, StringJc chars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("lastIndexOfAnyChar_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 ii; 
    
    StringBuilderJc* _stringBuilderThCxt = threadBuffer_StringBuilderJc(_thCxt);
    
    zsq = length_CharSeqJc(sq, _thCxt);
    ii = to > zsq ? zsq : to;
    if(from < 0) { throw_sJc(ident_IndexOutOfBoundsExceptionJc, 
      ( setLength_StringBuilderJc(_stringBuilderThCxt, 0, _thCxt)
      , append_z_StringBuilderJc(_stringBuilderThCxt, "StringFunctions.lastIndexOfAnyChar - form <0; ", _thCxt)
      , append_I_StringBuilderJc(_stringBuilderThCxt, from, _thCxt)
      , toString_StringBuilderJc(&(_stringBuilderThCxt)->base.object, _thCxt)
      ), 0, &_thCxt->stacktraceThreadContext, __LINE__); return 0; };
    
    while(--ii >= from && indexOf_C_StringJc(chars, charAt_CharSeqJc(sq, ii, _thCxt)) < 0)
      { }/*pre-decrement.*/
      
    { STACKTRC_LEAVE;
      return ii >= from ? ii + 1 : -1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence contains the other given CharSequence.*/
int32 indexOf_CsiiS_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 fromIndex, int32 to, StringJc str, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_CsiiS_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 max; 
    int32 ii; 
    char ch; 
    
    
    zsq = length_CharSeqJc(sq, _thCxt);
    max = (to >= zsq ? zsq : to) - length_StringJc(str) + 1;
    ii = fromIndex - 1;
    if(fromIndex < 0) 
    { 
      
      ii = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }
    else if(fromIndex >= max) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
      }
    }
    ch = charAt_StringJc(str, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0);
    
    while(++ii < max)
      { 
        
        if(charAt_CharSeqJc(sq, ii, _thCxt) == ch) 
        { /*:search first char of str*/
          
          int32 s1 = 0; 
          
          
          s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
          { int32 jj; 
            for(jj = ii + 1; jj < ii + length_StringJc(str); ++jj)
              { 
                
                if(charAt_CharSeqJc(sq, jj, _thCxt) != charAt_StringJc(str, ++s1)) 
                { 
                  
                  s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;/*designate: not found*/
                  
                  break;
                }
              }
          }
          if(s1 >= 0) { STACKTRC_LEAVE;
          return ii;
        }/*found.*/
          
        }
      }
    { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence contains the other given CharSequence.*/
int32 indexOf_CsiiCs_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 fromIndex, int32 to, CharSeqJc str, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_CsiiCs_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 max; 
    int32 ii; 
    char ch; 
    
    
    zsq = length_CharSeqJc(sq, _thCxt);
    max = (to >= zsq ? zsq : to) - length_CharSeqJc(str, _thCxt) + 1;
    ii = fromIndex - 1;
    if(fromIndex < 0) 
    { 
      
      ii = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }
    else if(fromIndex >= max) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
      }
    }
    ch = charAt_CharSeqJc(str, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, _thCxt);
    
    while(++ii < max)
      { 
        
        if(charAt_CharSeqJc(sq, ii, _thCxt) == ch) 
        { /*:search first char of str*/
          
          int32 s1 = 0; 
          
          
          s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
          { int32 jj; 
            for(jj = ii + 1; jj < ii + length_CharSeqJc(str, _thCxt); ++jj)
              { 
                
                if(charAt_CharSeqJc(sq, jj, _thCxt) != charAt_CharSeqJc(str, ++s1, _thCxt)) 
                { 
                  
                  s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;/*designate: not found*/
                  
                  break;
                }
              }
          }
          if(s1 >= 0) { STACKTRC_LEAVE;
          return ii;
        }/*found.*/
          
        }
      }
    { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Searches the first occurrence of the given CharSequence in a CharSequence.*/
int32 indexOf_CsCsi_StringFunctionsJc(/*static*/ CharSeqJc sq, CharSeqJc str, int32 fromIndex, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_CsCsi_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return indexOf_CsiiCs_StringFunctionsJc(/*static*/sq, fromIndex, MAX_VALUE_IntegerJc, str, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Searches the first occurrence of the given CharSequence in a CharSequence.*/
int32 indexOf_CsCs_StringFunctionsJc(/*static*/ CharSeqJc sq, CharSeqJc str, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indexOf_CsCs_StringFunctionsJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return indexOf_CsiiCs_StringFunctionsJc(/*static*/sq, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, MAX_VALUE_IntegerJc, str, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence contains the given String.*/
int32 lastIndexOf_CsiiS_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 fromIndex, int32 to, StringJc str, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("lastIndexOf_CsiiS_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 max; 
    char ch; 
    
    
    zsq = length_CharSeqJc(sq, _thCxt);
    max = (to >= zsq ? zsq : to) - length_StringJc(str) + 1;
    if(fromIndex >= max) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
      }
    }
    ch = charAt_StringJc(str, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0);
    
    while(--max >= fromIndex)
      { 
        
        if(charAt_CharSeqJc(sq, max, _thCxt) == ch) 
        { 
          int32 s1 = 0; 
          
          
          s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
          { int32 jj; 
            for(jj = max + 1; jj < max + length_StringJc(str) - 1; ++jj)
              { 
                
                if(charAt_CharSeqJc(sq, jj, _thCxt) != charAt_StringJc(str, ++s1)) 
                { 
                  
                  s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;/*designate: not found*/
                  
                  break;
                }
              }
          }
          if(s1 >= 0) { STACKTRC_LEAVE;
          return max;
        }/*found.*/
          
        }
      }
    { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Checks whether the given CharSequence contains the other given CharSequence.*/
int32 lastIndexOf_CsiiCs_StringFunctionsJc(/*static*/ CharSeqJc sq, int32 fromIndex, int32 to, CharSeqJc str, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("lastIndexOf_CsiiCs_StringFunctionsJc");
  
  { 
    int32 zsq; 
    int32 max; 
    char ch; 
    
    
    zsq = length_CharSeqJc(sq, _thCxt);
    max = (to >= zsq ? zsq : to) - length_CharSeqJc(str, _thCxt) + 1;
    if(fromIndex >= max) 
    { 
      
      { STACKTRC_LEAVE;
        return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
      }
    }
    ch = charAt_CharSeqJc(str, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, _thCxt);
    
    while(--max >= fromIndex)
      { 
        
        if(charAt_CharSeqJc(sq, max, _thCxt) == ch) 
        { 
          int32 s1 = 0; 
          
          
          s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)0;
          { int32 jj; 
            for(jj = max + 1; jj < max + length_CharSeqJc(str, _thCxt); ++jj)
              { 
                
                if(charAt_CharSeqJc(sq, jj, _thCxt) != charAt_CharSeqJc(str, ++s1, _thCxt)) 
                { 
                  
                  s1 = (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;/*designate: not found*/
                  
                  break;
                }
              }
          }
          if(s1 > 0) { STACKTRC_LEAVE;
          return max;
        }/*found.*/
          
        }
      }
    { STACKTRC_LEAVE;
      return (int32/*FieldData.testAndChangeAccess TODO correct?*/)-1;
    }/*not found;*/
    
  }
  STACKTRC_LEAVE;
}


/**Returns a String with 2*indent spaces for indentation.*/
StringJc indent2_StringFunctionsJc(/*static*/ int32 indent, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("indent2_StringFunctionsJc");
  
  { 
    
    if(2 * indent < length_StringJc(indentString_StringFunctionsJc) - 1) 
    { 
      
      { STACKTRC_LEAVE;
        return substring_StringJc(indentString_StringFunctionsJc, (int32/*FieldData.testAndChangeAccess TODO correct?*/)1, 1 + 2 * indent, _thCxt);
      }
    }
    else { STACKTRC_LEAVE;
      return substring_I_StringJc(indentString_StringFunctionsJc, (int32/*FieldData.testAndChangeAccess TODO correct?*/)1, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Returns a String with a newline \n character and 2*indent spaces for indentation.*/
StringJc nl_indent2_StringFunctionsJc(/*static*/ int32 indent, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("nl_indent2_StringFunctionsJc");
  
  { 
    
    if(2 * indent < length_StringJc(indentString_StringFunctionsJc) - 1) 
    { 
      
      { STACKTRC_LEAVE;
        return substring_StringJc(indentString_StringFunctionsJc, (int32/*FieldData.testAndChangeAccess TODO correct?*/)0, 1 + 2 * indent, _thCxt);
      }
    }
    else { STACKTRC_LEAVE;
      return indentString_StringFunctionsJc;
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_StringFunctionsJc mtblStringFunctionsJc = {
{ { sign_Mtbl_StringFunctionsJc //J2C: Head of methodtable of StringFunctionsJc
  , (struct Size_Mtbl_t*)((1 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: Dynamic methods of the class StringFunctionsJc
, test_StringFunctionsJc_F //test
  //J2C: The superclass's methodtable: 
, { { sign_Mtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class ObjectJc
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern_C struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_StringFunctionsJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_StringFunctionsJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_StringFunctionsJc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const reflection_StringFunctionsJc_s;
extern_C struct ClassJc_t const reflection_StringJc;
const struct Reflection_Fields_StringFunctionsJc_s_t
{ ObjectArrayJc head; FieldJc data[3];
} reflection_Fields_StringFunctionsJc_s =
{ CONST_ObjectArrayJc(FieldJc, 3, OBJTYPE_FieldJc, null, &reflection_Fields_StringFunctionsJc_s)
, {
     { "version"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_StringFunctionsJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&version_StringFunctionsJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_StringFunctionsJc_s
    }
   , { "cEndOfText"
    , 0 //nrofArrayElements
    , REFLECTION_char
    , 4 << kBitPrimitiv_Modifier_reflectJc |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&cEndOfText_StringFunctionsJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&cEndOfText_StringFunctionsJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_StringFunctionsJc_s
    }
   , { "indentString"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&indentString_StringFunctionsJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&indentString_StringFunctionsJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_StringFunctionsJc_s
    }
} };
const ClassJc reflection_StringFunctionsJc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "StringFunctionsJc_s"
,  0 //position of ObjectJc
, sizeof(StringFunctionsJc_s)
, (FieldJcArray const*)&reflection_Fields_StringFunctionsJc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_StringFunctionsJc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblStringFunctionsJc.mtbl.head
};
