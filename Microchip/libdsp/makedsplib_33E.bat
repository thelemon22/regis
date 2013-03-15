@echo off
set SAVE=
set SAVE=%PIC30_OMF%
:askagain
echo.
echo Press C for COFF library
echo Press E for ELF library
echo Press Q to quit
echo.
set choice=
set /p choice=Which OMF do you use?
if '%choice%' == 'C' goto COFF
if '%choice%' == 'c' goto COFF
if '%choice%' == 'E' goto ELF
if '%choice%' == 'e' goto ELF
if '%choice%' == 'Q' goto EXIT
if '%choice%' == 'q' goto EXIT
echo.
goto askagain
:EXIT
  echo Not building a library.
  goto end
:COFF
  set PIC30_OMF=coff
  goto start
:ELF
  set PIC30_OMF=elf
:start
@echo on
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/flt2frct.s ./src/flt2frct.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/flt2frct.list -o ./obj/flt2frct.o ./obj/flt2frct.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/frct2flt.s ./src/frct2flt.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/frct2flt.list -o ./obj/frct2flt.o ./obj/frct2flt.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/initbart.s ./src/initbart.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/initbart.list -o ./obj/initbart.o ./obj/initbart.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/initblck.s ./src/initblck.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/initblck.list -o ./obj/initblck.o ./obj/initblck.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/inithamm.s ./src/inithamm.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/inithamm.list -o ./obj/inithamm.o ./obj/inithamm.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/inithann.s ./src/inithann.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/inithann.list -o ./obj/inithann.o ./obj/inithann.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/initkais.s ./src/initkais.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/initkais.list -o ./obj/initkais.o ./obj/initkais.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/inittwid.s ./src/inittwid.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/inittwid.list -o ./obj/inittwid.o ./obj/inittwid.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/initcosf.s ./src/initcosf.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/initcosf.list -o ./obj/initcosf.o ./obj/initcosf.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/minv.s ./src/minv.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/minv.list -o ./obj/minv.o ./obj/minv.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/fft32.s ./src/fft32.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/fft32.list -o ./obj/fft32.o ./obj/fft32.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/ifft32.s ./src/ifft32.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/ifft32.list -o ./obj/ifft32.o ./obj/ifft32.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/fft32oop.s ./src/fft32oop.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/fft32oop.list -o ./obj/fft32oop.o ./obj/fft32oop.s
pic30-gcc -S  -I./include -I./data  -Wall -O3 -g -mconst-in-code -mtext=.libdsp -DDATA_TYPE=1 -DIN_SPACE=0 -DIN_X_SPACE=0 -DIN_P_SPACE=1 -DSIM_VAL=0 -DMPLAB_VAL=1 -DVALIDATION=0 -o ./obj/ifft32oop.s ./src/ifft32oop.c
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/ifft32oop.list -o ./obj/ifft32oop.o ./obj/ifft32oop.s

pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vmax.lst -o ./obj/vmax.obj ./asm/vmax.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vcopy.lst -o ./obj/vcopy.obj ./asm/vcopy.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vzpad.lst -o ./obj/vzpad.obj ./asm/vzpad.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vmin.lst -o ./obj/vmin.obj ./asm/vmin.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vneg.lst -o ./obj/vneg.obj ./asm/vneg.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vscl.lst -o ./obj/vscl.obj ./asm/vscl.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vadd.lst -o ./obj/vadd.obj ./asm/vadd.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vsub.lst -o ./obj/vsub.obj ./asm/vsub.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vmul.lst -o ./obj/vmul.obj ./asm/vmul.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vdot.lst -o ./obj/vdot.obj ./asm/vdot.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vpow.lst -o ./obj/vpow.obj ./asm/vpow.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vcon.lst -o ./obj/vcon.obj ./asm/vcon.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/vcor.lst -o ./obj/vcor.obj ./asm/vcor.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/dowindow.lst -o ./obj/dowindow.obj ./asm/dowindow.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/mscl.lst -o ./obj/mscl.obj ./asm/mscl.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/mtrp.lst -o ./obj/mtrp.obj ./asm/mtrp.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/madd.lst -o ./obj/madd.obj ./asm/madd.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/msub.lst -o ./obj/msub.obj ./asm/msub.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/mmul.lst -o ./obj/mmul.obj ./asm/mmul.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/dct.lst -o ./obj/dct.obj ./asm/dct.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/dctoop.lst -o ./obj/dctoop.obj ./asm/dctoop.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/fft.lst -o ./obj/fft.obj ./asm/fft.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/fftoop.lst -o ./obj/fftoop.obj ./asm/fftoop.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/ifft.lst -o ./obj/ifft.obj ./asm/ifft.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/ifftoop.lst -o ./obj/ifftoop.obj ./asm/ifftoop.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/bitrev.lst -o ./obj/bitrev.obj ./asm/bitrev.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/tonegen32b.lst -o ./obj/tonegen32b.obj ./asm/tonegen32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/rbrev32b.lst -o ./obj/rbrev32b.obj ./asm/rbrev32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/cplxFft32b.lst -o ./obj/cplxFft32b.obj ./asm/cplxFft32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/realFft32b.lst -o ./obj/realFft32b.obj ./asm/realFft32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/cplxiFft32b.lst -o ./obj/cplxiFft32b.obj ./asm/cplxiFft32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/realiFft32b.lst -o ./obj/realiFft32b.obj ./asm/realiFft32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/cplxmag32b.lst -o ./obj/cplxmag32b.obj ./asm/cplxmag32b.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firinit.lst -o ./obj/firinit.obj ./asm/firinit.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firdelay.lst -o ./obj/firdelay.obj ./asm/firdelay.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firintdl.lst -o ./obj/firintdl.obj ./asm/firintdl.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firdecim.lst -o ./obj/firdecim.obj ./asm/firdecim.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firinter.lst -o ./obj/firinter.obj ./asm/firinter.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firlms.lst -o ./obj/firlms.obj ./asm/firlms.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firlmsn.lst -o ./obj/firlmsn.obj ./asm/firlmsn.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/firlatt.lst -o ./obj/firlatt.obj ./asm/firlatt.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/iirlatt.lst -o ./obj/iirlatt.obj ./asm/iirlatt.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/fir.lst -o ./obj/fir.obj ./asm/fir.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/iircan.lst -o ./obj/iircan.obj ./asm/iircan.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/iirtrans.lst -o ./obj/iirtrans.obj ./asm/iirtrans.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/cplxsqrmag.lst -o ./obj/cplxsqrmag.obj ./asm/cplxsqrmag.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/pid.lst -o ./obj/pid.obj ./asm/pid.s
pic30-as  --defsym YMEM_ERRATA=1 --defsym PSV_ERRATA=1 --defsym __dsPIC33E=1 -p generic-16dsp-ep -I ./inc -a=./obj/stackguard.lst -o ./obj/stackguard.obj ./asm/stackguard.s
mkdir lib
pic30-ar -rcos lib/libdsp-%PIC30_OMF%.a ./obj/flt2frct.o ./obj/frct2flt.o ./obj/initbart.o ./obj/initblck.o ./obj/inithamm.o ./obj/inithann.o ./obj/initkais.o ./obj/inittwid.o ./obj/initcosf.o ./obj/minv.o ./obj/fft32.o ./obj/ifft32.o ./obj/fft32oop.o ./obj/ifft32oop.o ./obj/vmax.obj ./obj/vcopy.obj ./obj/vzpad.obj ./obj/vmin.obj ./obj/vneg.obj ./obj/vscl.obj ./obj/vadd.obj ./obj/vsub.obj ./obj/vmul.obj ./obj/vdot.obj ./obj/vpow.obj ./obj/vcon.obj ./obj/vcor.obj ./obj/dowindow.obj ./obj/mscl.obj ./obj/mtrp.obj ./obj/madd.obj ./obj/msub.obj ./obj/mmul.obj ./obj/dct.obj ./obj/dctoop.obj ./obj/fft.obj ./obj/fftoop.obj ./obj/ifft.obj ./obj/ifftoop.obj ./obj/bitrev.obj ./obj/firinit.obj ./obj/firdelay.obj ./obj/firintdl.obj ./obj/firdecim.obj ./obj/firinter.obj ./obj/firlms.obj ./obj/firlmsn.obj ./obj/firlatt.obj ./obj/iirlatt.obj ./obj/fir.obj ./obj/iircan.obj ./obj/iirtrans.obj ./obj/cplxsqrmag.obj ./obj/pid.obj ./obj/tonegen32b.obj ./obj/rbrev32b.obj ./obj/cplxFft32b.obj ./obj/realFft32b.obj ./obj/cplxiFft32b.obj ./obj/realiFft32b.obj ./obj/cplxmag32b.obj ./obj/stackguard.obj
set PIC30_OMF=
set PIC30_OMF=%SAVE%
:end


