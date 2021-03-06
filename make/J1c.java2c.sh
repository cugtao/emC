export TMP="../../tmpJava2CJc"
if test $1 = "clean"; then
  rm -f ../source/J1c/*.*
  rm -f ../source/J1c/LogMessageFile_MSG.*
  rm -f ../source/J1c/MsgDispatcher_MSG.*
  rm -f ../source/Ipc2c/InterProcessCommFactorySocket_Ipc.*
  rm -f ../include/J1c/*.*
  rm -f ../include/J1c/LogMessageFile_MSG.*
  rm -f ../include/J1c/MsgDispatcher_MSG.*
  rm -f ../include/Ipc2c/InterProcessCommFactorySocket_Ipc.*
  rm -f ../stc/J1c/*.*
  rm -f ../stc/J1c/LogMessageFile_MSG.*
  rm -f ../stc/J1c/MsgDispatcher_MSG.*
  rm -f ../stc/Ipc2c/InterProcessCommFactorySocket_Ipc.*
fi
if test ! $TMP; then mkdir $TMP; fi
java -ea -cp ../../exe/Java2C.jar org.vishia.java2C.Java2C -cfg=J1c.java2c.cfg -oc=../source -oh=../include -os=../stc -syntax=../../zbnfjax/zbnf --rlevel:334 --report:$TMP/java2cJc.rpt
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       