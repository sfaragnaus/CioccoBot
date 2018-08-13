/* recognition.i */

%module recognition
%include cpointer.i 
%include "carrays.i"
%array_functions(float, floatArray);
%array_functions(unsigned char, pixelArray);
%{
extern void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta);
extern void captureImage(unsigned char *pixelData, int w, int h, int stride, bool isLeft);
%}
extern void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcci, float delta);
extern void captureImage(unsigned char *pixelData, int w, int h, int stride, bool isLeft);
