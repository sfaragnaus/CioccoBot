#ifndef _RECOGNITION_EXPORTS_H__
#define _RECOGNITION_EXPORTS_H__

extern void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta);
extern void captureImage(unsigned char *pixelData, int w, int h, bool isLeft, float delta);

#endif /* _RECOGNITION_EXPORTS_H__ */
