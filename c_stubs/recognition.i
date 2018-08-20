/* recognition.i */

%module recognition
%include cpointer.i 
%include "carrays.i"
%array_functions(float, floatArray);
%array_functions(unsigned char, pixelArray);
%{
bool setup(void);
void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta);
void captureImage(unsigned char *pixelDataSx, unsigned char *pixelDataDx, int w, int h, int stride, float delta);
%}
bool setup(void);
void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcci, float delta);
void captureImage(unsigned char *pixelDataSx, unsigned char *pixelDataDx, int w, int h, int stride, float delta);
