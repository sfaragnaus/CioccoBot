#ifndef _RECOGNITION_EXPORTS_H__
#define _RECOGNITION_EXPORTS_H__

/*#ifdef TESTFUNCDLL_EXPORT
#define TESTFUNCDLL_API __declspec(dllexport) 
#else
#define TESTFUNCDLL_API __declspec(dllimport) 
#endif*/
#define TESTFUNCDLL_API __declspec(dllexport)

 void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta);
 void captureImage(unsigned char *pixelData, int w, int h, int stride, bool isLeft, float delta);

#endif /* _RECOGNITION_EXPORTS_H__ */
