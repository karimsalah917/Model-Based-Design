#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  lcc

CC        =  "C:\Program Files\Polyspace\R2021a\sys\lcc64\lcc64\bin\lcc64.exe"
LD        =  "C:\Program Files\Polyspace\R2021a\sys\lcc64\lcc64\bin\lcclnk64.exe"
LIBCMD    =  "C:\Program Files\Polyspace\R2021a\sys\lcc64\lcc64\bin\lcclib64.exe"
CFLAGS    =  -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -nodeclspec
LDFLAGS   =  -s -dll -entry LibMain vPPGI5eot2j2Pzb3RvrYNB_cclib.def -L"C:\Program Files\Polyspace\R2021a\sys\lcc64\lcc64\lib64"

OBJECTS = \
	   LED.obj \
	   slcc_interface_vPPGI5eot2j2Pzb3RvrYNB.obj \
	   lccstub.obj \

STATICLIBS = \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     -I"c:\program files\polyspace\r2021a\extern\include" \
     -I"c:\program files\polyspace\r2021a\simulink\include" \
     -I"e:\embedded\workspace\mbd\mbd topic6\slprj\_slcc\vppgi5eot2j2pzb3rvrynb" \
     -I"e:\embedded\workspace\mbd\mbd topic6" \
     -I"c:\program files\polyspace\r2021a\sys\lcc64\lcc64\include64" \
     -I"c:\program files\polyspace\r2021a\sys\lcc64\lcc64\mex" \

#--------------------------------- Rules --------------------------------------

vPPGI5eot2j2Pzb3RvrYNB_cclib.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:vPPGI5eot2j2Pzb3RvrYNB_cclib.dll $(OBJECTS)  $(STATICLIBS) "C:\Program Files\Polyspace\R2021a\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\Polyspace\R2021a\extern\lib\win64\microsoft\libmx.lib"
LED.obj :	e:\embedded\workspace\mbd\mbd topic6\LED.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "e:\embedded\workspace\mbd\mbd topic6\LED.c"
slcc_interface_vPPGI5eot2j2Pzb3RvrYNB.obj :	E:\Embedded\workspace\MBD\MBD topic6\slprj\_slcc\vPPGI5eot2j2Pzb3RvrYNB\slcc_interface_vPPGI5eot2j2Pzb3RvrYNB.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "E:\Embedded\workspace\MBD\MBD topic6\slprj\_slcc\vPPGI5eot2j2Pzb3RvrYNB\slcc_interface_vPPGI5eot2j2Pzb3RvrYNB.c"
lccstub.obj :	C:\PROGRA~1\POLYSP~1\R2021a\sys\lcc64\lcc64\mex\lccstub.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\Polyspace\R2021a\sys\lcc64\lcc64\mex\lccstub.c"
