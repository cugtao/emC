/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __J1c_StringPartJc_h__
#define __J1c_StringPartJc_h__

#include "Fwc/fw_MemC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct Part_StringPartJc_t;
struct StringBuilderJc_t;
struct StringPartJc_t;
struct StringPartScanJc_t;


/* J2C: includes *********************************************************/
#include "Jc/ObjectJc.h"  //interface
#include "Jc/StringJc.h"  //interface


/*@CLASS_C Part_StringPartJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct Part_StringPartJc_t
{ 
  union { ObjectJc object; CharSeqJc CharSeqJc;} base; 
  struct StringPartJc_t* outer;  //J2C: Reference to outer class, implicit in Java
  int32 b1;   /*Absolute positions of part of chars*/
  int32 e1;   /*Absolute positions of part of chars*/
} Part_StringPartJc_s;
  

#define sizeof_Part_StringPartJc_s sizeof(Part_StringPartJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef Part_StringPartJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define Part_StringPartJcREFDEF
  struct Part_StringPartJc_t;
  DEFINE_EnhancedRefJc(Part_StringPartJc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct Part_StringPartJc_X_t { ObjectArrayJc head; Part_StringPartJcREF data[50]; } Part_StringPartJc_X;
typedef struct Part_StringPartJc_Y_t { ObjectArrayJc head; Part_StringPartJc_s data[50]; } Part_StringPartJc_Y;

 extern_C struct ClassJc_t const reflection_Part_StringPartJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_Part_StringPartJc(OBJP) { CONST_ObjectJc(sizeof(Part_StringPartJc_s), OBJP, &reflection_Part_StringPartJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_Part_StringPartJc_F(ObjectJc* othis, ThCxt* _thCxt);




/**A subsequence*/
METHOD_C struct Part_StringPartJc_t* ctorO_Part_StringPartJc(struct StringPartJc_t* outer, ObjectJc* othis, int32 from, int32 to, ThCxt* _thCxt);

METHOD_C char charAt_Part_StringPartJc(Part_StringPartJc_s* thiz, int32 index, ThCxt* _thCxt);

METHOD_C int32 length_Part_StringPartJc(Part_StringPartJc_s* thiz, ThCxt* _thCxt);

METHOD_C CharSeqJc subSequence_Part_StringPartJc(Part_StringPartJc_s* thiz, int32 from, int32 end, ThCxt* _thCxt);

METHOD_C StringJc toString_Part_StringPartJc(ObjectJc* ithis, ThCxt* _thCxt);

/**Builds a new Part without leading and trailing white spaces.*/
METHOD_C struct Part_StringPartJc_t* trim_Part_StringPartJc(Part_StringPartJc_s* thiz, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_Part_StringPartJc[]; //marker for methodTable check
typedef struct Mtbl_Part_StringPartJc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_CharSeqJc CharSeqJc;
} Mtbl_Part_StringPartJc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class Part_StringPartJc : private Part_StringPartJc_s
{ public:

  char charAt(int32 index){  return charAt_Part_StringPartJc(this, index,  null/*_thCxt*/); }

  int32 length(){  return length_Part_StringPartJc(this,  null/*_thCxt*/); }

  CharSeqJc subSequence(int32 from, int32 end){  return subSequence_Part_StringPartJc(this, from, end,  null/*_thCxt*/); }

  StringJc toString(){  return toString_Part_StringPartJc(&this->base.object,  null/*_thCxt*/); }

  struct Part_StringPartJc_t* trim(){  return trim_Part_StringPartJc(this,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C StringPartJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct StringPartJc_t
{ 
  union { ObjectJc object; CharSeqJc CharSeqJc;ComparableJc ComparableJc;CloseableJc CloseableJc;} base; 
  int32 begin;   /*The actual start position of the valid part.*/
  int32 end;   /*The actual exclusive end position of the valid part.*/
  int32 begiMin;   /*The most left possible start position*/
  int32 endMax;   /*The rightest possible exclusive end position*/
  CharSeqJc content;   /*The referenced string. It is a CharSequence for enhanced using.    */
  bool bCurrentOk;   /*false if current scanning is not match*/
  bool bStartScan;   /*If true, than all idxLastScanned..*/
  int32 beginLast;   /*Borders of the last part before calling of scan__(), seek__(), lento__()*/
  int32 endLast;   /*Borders of the last part before calling of scan__(), seek__(), lento__()*/
  bool bFound;   /*True if the last operation of lento__(), seek etc. has found anything. See {@link #found()}. */
  int32 bitMode;   /*Some mode bits. See all static final int xxx_mode. */
  StringJc sFile;   /*Bit in mode*/
  StringJc sCommentStart;   /*The string defined the start of comment inside a text.*/
  StringJc sCommentEnd;   /*The string defined the end of comment inside a text.*/
  StringJc sCommentToEol;   /*The string defined the start of comment to end of line*/
} StringPartJc_s;
  

#define sizeof_StringPartJc_s sizeof(StringPartJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef StringPartJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define StringPartJcREFDEF
  struct StringPartJc_t;
  DEFINE_EnhancedRefJc(StringPartJc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct StringPartJc_X_t { ObjectArrayJc head; StringPartJcREF data[50]; } StringPartJc_X;
typedef struct StringPartJc_Y_t { ObjectArrayJc head; StringPartJc_s data[50]; } StringPartJc_Y;

 extern_C struct ClassJc_t const reflection_StringPartJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_StringPartJc(OBJP) { CONST_ObjectJc(sizeof(StringPartJc_s), OBJP, &reflection_StringPartJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_StringPartJc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern StringJc sVersion_StringPartJc;   /*Version, history and license.*/
#define seekEnd_StringPartJc 1  /*Flag to force setting the start position after the seeking string*/
#define mSeekBackward__StringPartJc 0x10  /*Flag bit to force seeking backward*/
#define mSeekToLeft__StringPartJc 0x40  /*Flag bit to force seeking left from start (Backward)*/
 extern const int32 seekToLeft_StringPartJc;   /*Flag to force seeking backward from the start position*/
 extern const int32 seekBack_StringPartJc;   /*Flag to force seeking backward from the end position*/
#define seekNormal_StringPartJc 0  /*Flag to force seeking forward*/
#define mSkipOverWhitespace_mode_StringPartJc 0x1  /*Bit in mode*/
#define mSkipOverCommentInsideText_mode_StringPartJc 0x2  /*Bit in mode*/
#define mSkipOverCommentToEol_mode_StringPartJc 0x4  /*Bit in mode*/
 extern const char cStartOfText_StringPartJc;   /*The char used to code start of text. */
 extern const char cEndOfText_StringPartJc;   /*The char used to code end of text. */


/**Creates a new empty StringPart without an associated String. See method set() to assign a String.*/
METHOD_C struct StringPartJc_t* ctorO_StringPartJc(ObjectJc* othis, ThCxt* _thCxt);

/**Creates a new StringPart, with the given content from a String*/
METHOD_C struct StringPartJc_t* ctorO_Cs_StringPartJc(ObjectJc* othis, CharSeqJc src, ThCxt* _thCxt);

/**Builds a StringPart which uses the designated part of the given src.*/
METHOD_C struct StringPartJc_t* ctorO_Csii_StringPartJc(ObjectJc* othis, CharSeqJc src, int32 start, int32 end, ThCxt* _thCxt);

/**Sets the input file for information {@link #getInputfile()}*/
METHOD_C void setInputfile_StringPartJc(StringPartJc_s* thiz, StringJc file, ThCxt* _thCxt);

/**Sets the content to the given string, forgets the old content*/
METHOD_C struct StringPartJc_t* assign_Cs_StringPartJc(StringPartJc_s* thiz, CharSeqJc ref, ThCxt* _thCxt);

/**Sets the content to the given string, forgets the old content.*/
METHOD_C struct StringPartJc_t* assignReplaceEnv_StringPartJc(StringPartJc_s* thiz, struct StringBuilderJc_t* input, ThCxt* _thCxt);

/**Sets the StringPart with the same String object as the given StringPart, forgets the old content.*/
METHOD_C struct StringPartJc_t* assign_XX_StringPartJc(StringPartJc_s* thiz, struct StringPartJc_t* src, ThCxt* _thCxt);

/**Sets the content of the StringPart , forgets the old content*/
METHOD_C struct StringPartJc_t* assignFromEnd_StringPartJc(StringPartJc_s* thiz, struct StringPartJc_t* src, ThCxt* _thCxt);

/**Set the mode of ignoring comments.*/
METHOD_C bool setIgnoreComment_b_StringPartJc(StringPartJc_s* thiz, bool bSet, ThCxt* _thCxt);

/**Set the character string of inline commentmode of ignoring comments.*/
METHOD_C bool setIgnoreComment_SS_StringPartJc(StringPartJc_s* thiz, StringJc sStart, StringJc sEnd, ThCxt* _thCxt);

/**Set the mode of ignoring comments to end of line.*/
METHOD_C bool setIgnoreEndlineComment_b_StringPartJc(StringPartJc_s* thiz, bool bSet, ThCxt* _thCxt);

/**Set the character string introducing the comments to end of line.*/
METHOD_C bool setIgnoreEndlineComment_S_StringPartJc(StringPartJc_s* thiz, StringJc sStart, ThCxt* _thCxt);

/**Set the mode of ignoring whitespaces.*/
METHOD_C bool setIgnoreWhitespaces_StringPartJc(StringPartJc_s* thiz, bool bSet, ThCxt* _thCxt);

/**Sets the start of the maximal part to the actual start of the valid part.*/
METHOD_C struct StringPartJc_t* setBeginMaxPart_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Sets the full range of available text.*/
#define setParttoMax_StringPartJc(THIZ) \
\
{ \
  \
  (THIZ)->begiMin = (THIZ)->beginLast = /*? assignment*/(THIZ)->begin = /*? assignment*/0;\
  (THIZ)->endMax = (THIZ)->end = /*? assignment*/(THIZ)->endLast = /*? assignment*/length_CharSeqJc((THIZ)->content, _thCxt);\
  (THIZ)->bStartScan = (THIZ)->bCurrentOk = /*? assignment*/true;\
}

/**Sets the start of the part to the exclusively end, set the end to the end of the content.*/
METHOD_C struct StringPartJc_t* fromEnd_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**This method returns the characters of the current part.*/
METHOD_C char charAt_StringPartJc(StringPartJc_s* thiz, int32 index, ThCxt* _thCxt);

/**Returns a volatile CharSequence from the range inside the current part.*/
METHOD_C struct Part_StringPartJc_t* subSequence_StringPartJc(StringPartJc_s* thiz, int32 from, int32 to, ThCxt* _thCxt);

METHOD_C int32 length_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Returns the lenght of the maximal part from current position*/
METHOD_C int32 lengthMaxPart_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Sets the endposition of the part of string to the given chars after start.*/
METHOD_C struct StringPartJc_t* lento_i_StringPartJc(StringPartJc_s* thiz, int32 len, ThCxt* _thCxt);

/**Sets the end position of the part of string to exclusively the char cc.*/
METHOD_C struct StringPartJc_t* lento_c_StringPartJc(StringPartJc_s* thiz, char cc, ThCxt* _thCxt);

/**Sets the endposition of the part of string to exclusively the given string.*/
METHOD_C struct StringPartJc_t* lento_S_StringPartJc(StringPartJc_s* thiz, StringJc ss, ThCxt* _thCxt);

/**Sets the endposition of the part of string to exclusively the given string.*/
METHOD_C struct StringPartJc_t* lento_Csi_StringPartJc(StringPartJc_s* thiz, CharSeqJc ss, int32 mode, ThCxt* _thCxt);

/**Sets the endposition of the part of string to the end of the identifier which is beginning on start.*/
METHOD_C struct StringPartJc_t* lentoIdentifier_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Sets the endposition of the part of string to the end of the identifier which is beginning on start.*/
METHOD_C struct StringPartJc_t* lentoIdentifier_SS_StringPartJc(StringPartJc_s* thiz, StringJc additionalStartChars, StringJc additionalChars, ThCxt* _thCxt);

/**Sets the len to the first position of any given char, but not if the char is escaped.*/
METHOD_C struct StringPartJc_t* lentoAnyNonEscapedChar_StringPartJc(StringPartJc_s* thiz, StringJc sCharsEnd, int32 maxToTest, ThCxt* _thCxt);

/**Sets the length of the valid part to the first position of the given String,*/
METHOD_C struct StringPartJc_t* lentoNonEscapedString_StringPartJc(StringPartJc_s* thiz, StringJc sEnd, int32 maxToTest, ThCxt* _thCxt);

/**Sets the current Part from the current position to exactly one line.*/
METHOD_C struct StringPartJc_t* line_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Displaces the start of the part for some chars to left or to right.*/
METHOD_C struct StringPartJc_t* seek_i_StringPartJc(StringPartJc_s* thiz, int32 nr, ThCxt* _thCxt);

/**Displaces the start of the part to the first char it is no whitespace.*/
METHOD_C struct StringPartJc_t* seekNoWhitespace_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**skip over comment and whitespaces*/
METHOD_C struct StringPartJc_t* skipWhitespaceAndComment_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Displaces the begin of the part to the first char it is no whitespace or comment.*/
METHOD_C struct StringPartJc_t* seekNoWhitespaceOrComments_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Returns true, if the last called seek__(), lento__() or skipWhitespaceAndComment()*/
METHOD_C bool found_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Displaces the begin of the part to the leftest possible begin.*/
METHOD_C struct StringPartJc_t* seekBegin_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Searchs the given String inside the valid part, posits the begin of the part to the begin of the searched string.*/
METHOD_C struct StringPartJc_t* seek_Si_StringPartJc(StringPartJc_s* thiz, StringJc sSeek, int32 mode, ThCxt* _thCxt);

/**Seeks back form the current end to the end of the given String starting from the end of the current part.*/
METHOD_C struct StringPartJc_t* seekBackward_StringPartJc(StringPartJc_s* thiz, StringJc sSeek, ThCxt* _thCxt);

/**Seeks back from the current end to one of the characters contained in chars, starting from the end of the current part.*/
METHOD_C struct StringPartJc_t* seekBackToAnyChar_StringPartJc(StringPartJc_s* thiz, StringJc chars, ThCxt* _thCxt);

/**Seeks to the given String, result is left side of the string.*/
#define seek_S_StringPartJc(THIZ, sSeek) \
(seek_Si_StringPartJc((THIZ), sSeek, seekNormal_StringPartJc, _thCxt))

/**Searchs the given String inside the valid part, posits the begin of the part to the begin of the searched string.*/
METHOD_C struct StringPartJc_t* seekAnyString_StringPartJc(StringPartJc_s* thiz, StringJc_Y* strings, int32_Y* nrofFoundString, ThCxt* _thCxt);

/**Searchs the given character inside the valid part, posits the begin of the part to the begin of the searched char.*/
METHOD_C struct StringPartJc_t* seek_ci_StringPartJc(StringPartJc_s* thiz, char cSeek, int32 mode, ThCxt* _thCxt);

/**Posits the start of the part after all of the chars given in the parameter string.*/
METHOD_C struct StringPartJc_t* seekNoChar_StringPartJc(StringPartJc_s* thiz, StringJc sChars, ThCxt* _thCxt);

/**Searches any char contained in sChars in the current part*/
METHOD_C int32 indexOfAnyChar_Sii_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 fromWhere, int32 maxToTest, ThCxt* _thCxt);

/**Returns the position of one of the chars in sChars within the part, started inside the part with fromIndex,*/
METHOD_C int32 indexOfAnyChar_Siiccc_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 fromWhere, int32 maxToTest, char transcriptChar, char quotationStartChar, char quotationEndChar, ThCxt* _thCxt);

/**Returns the last position of one of the chars in sChars*/
METHOD_C int32 lastIndexOfAnyChar_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 fromWhere, int32 maxToTest, ThCxt* _thCxt);

/**Returns the position of one of the chars in sChars within the part, started inside the part with fromIndex,*/
METHOD_C int32 indexOfAnyString_StringPartJc(StringPartJc_s* thiz, CharSeqJc_Y* listStrings, int32 fromWhere, int32 maxToTest, int32_Y* nrofFoundString, StringJc_Y* foundString, ThCxt* _thCxt);

/**Searches any char contained in sChars in the current part*/
METHOD_C int32 indexOfAnyCharOutsideQuotion_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 fromWhere, int32 maxToTest, ThCxt* _thCxt);

/**Searches the end of a quoted string*/
METHOD_C int32 indexEndOfQuotion_StringPartJc(StringPartJc_s* thiz, char cEndQuotion, int32 fromWhere, int32 maxToTest, ThCxt* _thCxt);

/**Searches the end of a quoted string*/
METHOD_C int32 indexEndOfQuotation_StringPartJc(StringPartJc_s* thiz, char cEndQuotion, char transcriptChar, int32 fromWhere, int32 maxToTest, ThCxt* _thCxt);

/**Returns the position of one of the chars in sChars within the part,*/
METHOD_C int32 indexOfAnyChar_S_StringPartJc(StringPartJc_s* thiz, StringJc sChars, ThCxt* _thCxt);

/**Returns the position of the first char other than the chars in sChars within the part, started inside the part with fromIndex,*/
METHOD_C int32 indexOfNoChar_Si_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 fromWhere, ThCxt* _thCxt);

/**Returns the position of the first char other than the chars in sChars within the part,*/
METHOD_C int32 indexOfNoChar_S_StringPartJc(StringPartJc_s* thiz, StringJc sChars, ThCxt* _thCxt);

/**Sets the length of the current part to any char content in sChars (terminate chars).*/
METHOD_C struct StringPartJc_t* lentoAnyChar_Si_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 maxToTest, ThCxt* _thCxt);

/**Sets the length of the current part to any char content in sChars (terminate chars).*/
METHOD_C struct StringPartJc_t* lentoAnyChar_Sii_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 maxToTest, int32 mode, ThCxt* _thCxt);

/**Sets the length of the current part to any terminate string given in sString.*/
METHOD_C struct StringPartJc_t* lentoAnyString_SYi_StringPartJc(StringPartJc_s* thiz, StringJc_Y* strings, int32 maxToTest, ThCxt* _thCxt);

/**Sets the length of the current part to any terminate string given in sString.*/
METHOD_C struct StringPartJc_t* lentoAnyString_SYii_StringPartJc(StringPartJc_s* thiz, StringJc_Y* strings, int32 maxToTest, int32 mode, ThCxt* _thCxt);

/**Sets the length of the current part to any terminate string given in sString.*/
METHOD_C void lentoAnyStringWithIndent_StringPartJc(StringPartJc_s* thiz, StringJc_Y* strings, StringJc sIndentChars, int32 maxToTest, struct StringBuilderJc_t* buffer, ThCxt* _thCxt);

/**Sets the length of the current part to any char content in sChars (terminate chars),*/
METHOD_C struct StringPartJc_t* lentoAnyCharOutsideQuotion_StringPartJc(StringPartJc_s* thiz, StringJc sChars, int32 maxToTest, ThCxt* _thCxt);

/**Sets the length of the current part to the end of the quotion*/
METHOD_C struct StringPartJc_t* lentoQuotionEnd_StringPartJc(StringPartJc_s* thiz, char sEndQuotion, int32 maxToTest, ThCxt* _thCxt);

/**Sets the length of the current part to the end of the current line.*/
METHOD_C struct StringPartJc_t* lentoLineEnd_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Increments the begin of the current part over maybe found whitespaces*/
METHOD_C struct StringPartJc_t* trimWhiteSpaces_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Sets the length of the current part to any char content in sChars (terminate chars).*/
METHOD_C struct StringPartJc_t* lentoAnyChar_S_StringPartJc(StringPartJc_s* thiz, StringJc sChars, ThCxt* _thCxt);

/**Sets the length to the end of the maximal part if the length is 0*/
METHOD_C struct StringPartJc_t* len0end_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Sets the length to the end of the maximal part.*/
METHOD_C struct StringPartJc_t* setLengthMax_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Posits the end of the part before all of the chars given in the parameter string.*/
METHOD_C struct StringPartJc_t* lenBacktoNoChar_StringPartJc(StringPartJc_s* thiz, StringJc sChars, ThCxt* _thCxt);

/**Trims all leading and trailing whitespaces within the part.*/
METHOD_C struct StringPartJc_t* trim_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Trims a java- or C-style line-comment from end of part and all leading and trailing whitespaces.*/
METHOD_C struct StringPartJc_t* trimComment_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

METHOD_C int32 compareTo_StringPartJc(StringPartJc_s* thiz, CharSeqJc str2, ThCxt* _thCxt);

/**Returns the position of the char within the part,*/
METHOD_C int32 indexOf_c_StringPartJc(StringPartJc_s* thiz, char ch, ThCxt* _thCxt);

/**Returns the position of the char within the part, started inside the part with fromIndex,*/
METHOD_C int32 indexOf_ci_StringPartJc(StringPartJc_s* thiz, char ch, int32 fromIndex, ThCxt* _thCxt);

/**Returns the position of the string within the part*/
METHOD_C int32 indexOf_S_StringPartJc(StringPartJc_s* thiz, StringJc sCmp, ThCxt* _thCxt);

/**Returns the position of the string within the part*/
METHOD_C int32 indexOf_Cs_StringPartJc(StringPartJc_s* thiz, CharSeqJc sCmp, ThCxt* _thCxt);

/**Returns the position of the string within the part*/
METHOD_C int32 indexOf_Csii_StringPartJc(StringPartJc_s* thiz, CharSeqJc sCmp, int32 fromIndex, int32 maxToTest, ThCxt* _thCxt);

/**Compares the Part of string with the given string*/
METHOD_C bool equals_Cs_StringPartJc(StringPartJc_s* thiz, CharSeqJc sCmp, ThCxt* _thCxt);

/**compares the Part of string with the given string.*/
METHOD_C bool startsWith_StringPartJc(StringPartJc_s* thiz, CharSeqJc sCmp, ThCxt* _thCxt);

/**This routine provides the this-pointer as StringPartScan in a concatenation of StringPartBase-invocations.*/
METHOD_C struct StringPartScanJc_t* scan_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Gets the current position, useable for rewind*/
METHOD_C int64 getCurrentPosition_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Sets the current position at a fix position inside the maxPart.*/
METHOD_C void setCurrentPosition_StringPartJc(StringPartJc_s* thiz, int64 pos, ThCxt* _thCxt);

/**Gets a substring inside the maximal part*/
METHOD_C struct Part_StringPartJc_t* substring_StringPartJc(StringPartJc_s* thiz, int32 pos, int32 posendP, ThCxt* _thCxt);

/**Gets the next chars from current Position.*/
METHOD_C CharSeqJc getCurrent_StringPartJc(StringPartJc_s* thiz, int32 nChars, ThCxt* _thCxt);

/**Gets the next char at current Position.*/
METHOD_C char getCurrentChar_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Get the Line number and the column of the begin position.*/
typedef int32 MT_getLineAndColumn_StringPartJc(StringPartJc_s* thiz, int32_Y* column, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C int32 getLineAndColumn_StringPartJc_F(StringPartJc_s* thiz, int32_Y* column, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C int32 getLineAndColumn_StringPartJc(StringPartJc_s* thiz, int32_Y* column, ThCxt* _thCxt);

/**Gets the current position in line (column of the text).*/
METHOD_C int32 getCurrentColumn_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**This method may be overridden to return the file which is used to build this Stringpart.*/
METHOD_C StringJc getInputfile_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Returns the actual part of the string.*/
METHOD_C struct Part_StringPartJc_t* getCurrentPart_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Returns the last part of the string before any seek or scan operation.*/
METHOD_C CharSeqJc getLastPart_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Returns the actual part of the string.*/
METHOD_C CharSeqJc getCurrentPart_i_StringPartJc(StringPartJc_s* thiz, int32 maxLength, ThCxt* _thCxt);

/**Retrurn the part from start to end independent of the current positions.*/
METHOD_C struct Part_StringPartJc_t* getPart_StringPartJc(StringPartJc_s* thiz, int32 fromPos, int32 nrofChars, ThCxt* _thCxt);

METHOD_C char absCharAt_StringPartJc(StringPartJc_s* thiz, int32 index, ThCxt* _thCxt);

/**Returns a String from absolute range.*/
METHOD_C StringJc absSubString_StringPartJc(StringPartJc_s* thiz, int32 from, int32 to, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C StringJc toString_StringPartJc_F(ObjectJc* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C StringJc toString_StringPartJc(ObjectJc* ithis, ThCxt* _thCxt);

/**Returns a debug information of the content of the StringPart*/
METHOD_C StringJc debugString_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Central mehtod to invoke excpetion, usefull to set a breakpoint in debug*/
METHOD_C void throwIndexOutOfBoundsException_StringPartJc(StringPartJc_s* thiz, StringJc sMsg, ThCxt* _thCxt);

/**Closes the work*/
typedef void MT_close_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void close_StringPartJc_F(StringPartJc_s* thiz, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void close_StringPartJc(StringPartJc_s* thiz, ThCxt* _thCxt);

/**Replaces up to 20 placeholder with a given content.*/
METHOD_C StringJc replace_StringPartJc(/*static*/ CharSeqJc src, CharSeqJc_Y* placeholder, StringJc_Y* value, struct StringBuilderJc_t* dst, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_StringPartJc[]; //marker for methodTable check
typedef struct Mtbl_StringPartJc_t
{ MtblHeadJc head;
  MT_getLineAndColumn_StringPartJc* getLineAndColumn;
  MT_close_StringPartJc* close;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_CharSeqJc CharSeqJc;
  Mtbl_ComparableJc ComparableJc;
  Mtbl_CloseableJc CloseableJc;
} Mtbl_StringPartJc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class StringPartJc : private StringPartJc_s
{ public:

  char absCharAt(int32 index){  return absCharAt_StringPartJc(this, index,  null/*_thCxt*/); }

  StringJc absSubString(int32 from, int32 to){  return absSubString_StringPartJc(this, from, to,  null/*_thCxt*/); }

  StringPartJc& assignFromEnd(struct StringPartJc_t* src){ assignFromEnd_StringPartJc(this, src,  null/*_thCxt*/);  return *this; }

  StringPartJc& assignReplaceEnv(struct StringBuilderJc_t* input){ assignReplaceEnv_StringPartJc(this, input,  null/*_thCxt*/);  return *this; }

  StringPartJc& assign(CharSeqJc ref){ assign_Cs_StringPartJc(this, ref,  null/*_thCxt*/);  return *this; }

  StringPartJc& assign(struct StringPartJc_t* src){ assign_XX_StringPartJc(this, src,  null/*_thCxt*/);  return *this; }

  char charAt(int32 index){  return charAt_StringPartJc(this, index,  null/*_thCxt*/); }

  virtual void close(){ close_StringPartJc_F(this,  null/*_thCxt*/); }

  int32 compareTo(CharSeqJc str2){  return compareTo_StringPartJc(this, str2,  null/*_thCxt*/); }

  StringPartJc(CharSeqJc src){ init_ObjectJc(&this->base.object, sizeof(StringPartJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringPartJc_s, 0); ctorO_Cs_StringPartJc(&this->base.object, src,  null/*_thCxt*/); }

  StringPartJc(CharSeqJc src, int32 start, int32 end){ init_ObjectJc(&this->base.object, sizeof(StringPartJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringPartJc_s, 0); ctorO_Csii_StringPartJc(&this->base.object, src, start, end,  null/*_thCxt*/); }

  StringPartJc(){ init_ObjectJc(&this->base.object, sizeof(StringPartJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringPartJc_s, 0); ctorO_StringPartJc(&this->base.object,  null/*_thCxt*/); }

  StringJc debugString(){  return debugString_StringPartJc(this,  null/*_thCxt*/); }

  bool equals(CharSeqJc sCmp){  return equals_Cs_StringPartJc(this, sCmp,  null/*_thCxt*/); }

  bool found(){  return found_StringPartJc(this,  null/*_thCxt*/); }

  StringPartJc& fromEnd(){ fromEnd_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  char getCurrentChar(){  return getCurrentChar_StringPartJc(this,  null/*_thCxt*/); }

  int32 getCurrentColumn(){  return getCurrentColumn_StringPartJc(this,  null/*_thCxt*/); }

  struct Part_StringPartJc_t* getCurrentPart(){  return getCurrentPart_StringPartJc(this,  null/*_thCxt*/); }

  CharSeqJc getCurrentPart(int32 maxLength){  return getCurrentPart_i_StringPartJc(this, maxLength,  null/*_thCxt*/); }

  int64 getCurrentPosition(){  return getCurrentPosition_StringPartJc(this,  null/*_thCxt*/); }

  CharSeqJc getCurrent(int32 nChars){  return getCurrent_StringPartJc(this, nChars,  null/*_thCxt*/); }

  StringJc getInputfile(){  return getInputfile_StringPartJc(this,  null/*_thCxt*/); }

  CharSeqJc getLastPart(){  return getLastPart_StringPartJc(this,  null/*_thCxt*/); }

  virtual int32 getLineAndColumn(int32_Y* column){  return getLineAndColumn_StringPartJc_F(this, column,  null/*_thCxt*/); }

  struct Part_StringPartJc_t* getPart(int32 fromPos, int32 nrofChars){  return getPart_StringPartJc(this, fromPos, nrofChars,  null/*_thCxt*/); }

  int32 indexEndOfQuotation(char cEndQuotion, char transcriptChar, int32 fromWhere, int32 maxToTest){  return indexEndOfQuotation_StringPartJc(this, cEndQuotion, transcriptChar, fromWhere, maxToTest,  null/*_thCxt*/); }

  int32 indexEndOfQuotion(char cEndQuotion, int32 fromWhere, int32 maxToTest){  return indexEndOfQuotion_StringPartJc(this, cEndQuotion, fromWhere, maxToTest,  null/*_thCxt*/); }

  int32 indexOfAnyCharOutsideQuotion(StringJcpp sChars, int32 fromWhere, int32 maxToTest){  return indexOfAnyCharOutsideQuotion_StringPartJc(this, sChars, fromWhere, maxToTest,  null/*_thCxt*/); }

  int32 indexOfAnyChar(StringJcpp sChars){  return indexOfAnyChar_S_StringPartJc(this, sChars,  null/*_thCxt*/); }

  int32 indexOfAnyChar(StringJcpp sChars, int32 fromWhere, int32 maxToTest){  return indexOfAnyChar_Sii_StringPartJc(this, sChars, fromWhere, maxToTest,  null/*_thCxt*/); }

  int32 indexOfAnyChar(StringJcpp sChars, int32 fromWhere, int32 maxToTest, char transcriptChar, char quotationStartChar, char quotationEndChar){  return indexOfAnyChar_Siiccc_StringPartJc(this, sChars, fromWhere, maxToTest, transcriptChar, quotationStartChar, quotationEndChar,  null/*_thCxt*/); }

  int32 indexOfAnyString(CharSeqJc_Y* listStrings, int32 fromWhere, int32 maxToTest, int32_Y* nrofFoundString, StringJc_Y* foundString){  return indexOfAnyString_StringPartJc(this, listStrings, fromWhere, maxToTest, nrofFoundString, foundString,  null/*_thCxt*/); }

  int32 indexOfNoChar(StringJcpp sChars){  return indexOfNoChar_S_StringPartJc(this, sChars,  null/*_thCxt*/); }

  int32 indexOfNoChar(StringJcpp sChars, int32 fromWhere){  return indexOfNoChar_Si_StringPartJc(this, sChars, fromWhere,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sCmp){  return indexOf_Cs_StringPartJc(this, sCmp,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sCmp, int32 fromIndex, int32 maxToTest){  return indexOf_Csii_StringPartJc(this, sCmp, fromIndex, maxToTest,  null/*_thCxt*/); }

  int32 indexOf(StringJcpp sCmp){  return indexOf_S_StringPartJc(this, sCmp,  null/*_thCxt*/); }

  int32 indexOf(char ch){  return indexOf_c_StringPartJc(this, ch,  null/*_thCxt*/); }

  int32 indexOf(char ch, int32 fromIndex){  return indexOf_ci_StringPartJc(this, ch, fromIndex,  null/*_thCxt*/); }

  int32 lastIndexOfAnyChar(StringJcpp sChars, int32 fromWhere, int32 maxToTest){  return lastIndexOfAnyChar_StringPartJc(this, sChars, fromWhere, maxToTest,  null/*_thCxt*/); }

  StringPartJc& len0end(){ len0end_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& lenBacktoNoChar(StringJcpp sChars){ lenBacktoNoChar_StringPartJc(this, sChars,  null/*_thCxt*/);  return *this; }

  int32 lengthMaxPart(){  return lengthMaxPart_StringPartJc(this,  null/*_thCxt*/); }

  int32 length(){  return length_StringPartJc(this,  null/*_thCxt*/); }

  StringPartJc& lentoAnyCharOutsideQuotion(StringJcpp sChars, int32 maxToTest){ lentoAnyCharOutsideQuotion_StringPartJc(this, sChars, maxToTest,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoAnyChar(StringJcpp sChars){ lentoAnyChar_S_StringPartJc(this, sChars,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoAnyChar(StringJcpp sChars, int32 maxToTest){ lentoAnyChar_Si_StringPartJc(this, sChars, maxToTest,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoAnyChar(StringJcpp sChars, int32 maxToTest, int32 mode){ lentoAnyChar_Sii_StringPartJc(this, sChars, maxToTest, mode,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoAnyNonEscapedChar(StringJcpp sCharsEnd, int32 maxToTest){ lentoAnyNonEscapedChar_StringPartJc(this, sCharsEnd, maxToTest,  null/*_thCxt*/);  return *this; }

  void lentoAnyStringWithIndent(StringJc_Y* strings, StringJcpp sIndentChars, int32 maxToTest, struct StringBuilderJc_t* buffer){ lentoAnyStringWithIndent_StringPartJc(this, strings, sIndentChars, maxToTest, buffer,  null/*_thCxt*/); }

  StringPartJc& lentoAnyString(StringJc_Y* strings, int32 maxToTest){ lentoAnyString_SYi_StringPartJc(this, strings, maxToTest,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoAnyString(StringJc_Y* strings, int32 maxToTest, int32 mode){ lentoAnyString_SYii_StringPartJc(this, strings, maxToTest, mode,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoIdentifier(StringJcpp additionalStartChars, StringJcpp additionalChars){ lentoIdentifier_SS_StringPartJc(this, additionalStartChars, additionalChars,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoIdentifier(){ lentoIdentifier_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoLineEnd(){ lentoLineEnd_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoNonEscapedString(StringJcpp sEnd, int32 maxToTest){ lentoNonEscapedString_StringPartJc(this, sEnd, maxToTest,  null/*_thCxt*/);  return *this; }

  StringPartJc& lentoQuotionEnd(char sEndQuotion, int32 maxToTest){ lentoQuotionEnd_StringPartJc(this, sEndQuotion, maxToTest,  null/*_thCxt*/);  return *this; }

  StringPartJc& lento(CharSeqJc ss, int32 mode){ lento_Csi_StringPartJc(this, ss, mode,  null/*_thCxt*/);  return *this; }

  StringPartJc& lento(StringJcpp ss){ lento_S_StringPartJc(this, ss,  null/*_thCxt*/);  return *this; }

  StringPartJc& lento(char cc){ lento_c_StringPartJc(this, cc,  null/*_thCxt*/);  return *this; }

  StringPartJc& lento(int32 len){ lento_i_StringPartJc(this, len,  null/*_thCxt*/);  return *this; }

  struct StringPartJc_t* line(){  return line_StringPartJc(this,  null/*_thCxt*/); }

  StringJc replace(CharSeqJc src, CharSeqJc_Y* placeholder, StringJc_Y* value, struct StringBuilderJc_t* dst){  return replace_StringPartJc(src, placeholder, value, dst,  null/*_thCxt*/); }

  struct StringPartScanJc_t* scan(){  return scan_StringPartJc(this,  null/*_thCxt*/); }

  StringPartJc& seekAnyString(StringJc_Y* strings, int32_Y* nrofFoundString){ seekAnyString_StringPartJc(this, strings, nrofFoundString,  null/*_thCxt*/);  return *this; }

  struct StringPartJc_t* seekBackToAnyChar(StringJcpp chars){  return seekBackToAnyChar_StringPartJc(this, chars,  null/*_thCxt*/); }

  StringPartJc& seekBackward(StringJcpp sSeek){ seekBackward_StringPartJc(this, sSeek,  null/*_thCxt*/);  return *this; }

  StringPartJc& seekBegin(){ seekBegin_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& seekNoChar(StringJcpp sChars){ seekNoChar_StringPartJc(this, sChars,  null/*_thCxt*/);  return *this; }

  StringPartJc& seekNoWhitespaceOrComments(){ seekNoWhitespaceOrComments_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& seekNoWhitespace(){ seekNoWhitespace_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  struct StringPartJc_t* seek(StringJcpp sSeek){  return seek_S_StringPartJc(this, sSeek); }

  StringPartJc& seek(StringJcpp sSeek, int32 mode){ seek_Si_StringPartJc(this, sSeek, mode,  null/*_thCxt*/);  return *this; }

  StringPartJc& seek(char cSeek, int32 mode){ seek_ci_StringPartJc(this, cSeek, mode,  null/*_thCxt*/);  return *this; }

  StringPartJc& seek(int32 nr){ seek_i_StringPartJc(this, nr,  null/*_thCxt*/);  return *this; }

  StringPartJc& setBeginMaxPart(){ setBeginMaxPart_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  void setCurrentPosition(int64 pos){ setCurrentPosition_StringPartJc(this, pos,  null/*_thCxt*/); }

  bool setIgnoreComment(StringJcpp sStart, StringJcpp sEnd){  return setIgnoreComment_SS_StringPartJc(this, sStart, sEnd,  null/*_thCxt*/); }

  bool setIgnoreComment(bool bSet){  return setIgnoreComment_b_StringPartJc(this, bSet,  null/*_thCxt*/); }

  bool setIgnoreEndlineComment(StringJcpp sStart){  return setIgnoreEndlineComment_S_StringPartJc(this, sStart,  null/*_thCxt*/); }

  bool setIgnoreEndlineComment(bool bSet){  return setIgnoreEndlineComment_b_StringPartJc(this, bSet,  null/*_thCxt*/); }

  bool setIgnoreWhitespaces(bool bSet){  return setIgnoreWhitespaces_StringPartJc(this, bSet,  null/*_thCxt*/); }

  void setInputfile(StringJcpp file){ setInputfile_StringPartJc(this, file,  null/*_thCxt*/); }

  StringPartJc& setLengthMax(){ setLengthMax_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  void setParttoMax(){ setParttoMax_StringPartJc(this); }

  struct StringPartJc_t* skipWhitespaceAndComment(){  return skipWhitespaceAndComment_StringPartJc(this,  null/*_thCxt*/); }

  bool startsWith(CharSeqJc sCmp){  return startsWith_StringPartJc(this, sCmp,  null/*_thCxt*/); }

  struct Part_StringPartJc_t* subSequence(int32 from, int32 to){  return subSequence_StringPartJc(this, from, to,  null/*_thCxt*/); }

  struct Part_StringPartJc_t* substring(int32 pos, int32 posendP){  return substring_StringPartJc(this, pos, posendP,  null/*_thCxt*/); }

  void throwIndexOutOfBoundsException(StringJcpp sMsg){ throwIndexOutOfBoundsException_StringPartJc(this, sMsg,  null/*_thCxt*/); }

  virtual StringJc toString(){  return toString_StringPartJc_F(&this->base.object,  null/*_thCxt*/); }

  StringPartJc& trimComment(){ trimComment_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& trimWhiteSpaces(){ trimWhiteSpaces_StringPartJc(this,  null/*_thCxt*/);  return *this; }

  StringPartJc& trim(){ trim_StringPartJc(this,  null/*_thCxt*/);  return *this; }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__J1c_StringPartJc_h__
