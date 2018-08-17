/* recognition.i */

%module recognition
%include cpointer.i 
%include "carrays.i"
%array_functions(float, floatArray);
%array_functions(unsigned char, pixelArray);
%{
void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta);
void captureImage(unsigned char *pixelData, int w, int h, int stride, bool isLeft, float delta);
%}
void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcci, float delta);
void captureImage(unsigned char *pixelData, int w, int h, int stride, bool isLeft, float delta);
