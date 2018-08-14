#include "recognition.h"
#include <iostream>
#include <opencv2/opencv.hpp>

void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta)
{
	*speed = 0;
	*acc = 0;
	*angular = 0;
	*angularAcc = 0;
}

void captureImage(unsigned char *pixelData, int w, int h, int stride, bool isLeft, float delta)
{
	cv::Mat cam(h, w, CV_8UC3, pixelData);
	cv::Mat flipped;
	cv::flip(cam, flipped, 0);
	cv::cvtColor(flipped, flipped, cv::COLOR_RGB2BGR);
	
	//cv::imwrite( isLeft?"leftcam.jpg":"rightcam.jpg", flipped);	//DO NOT ENABLE THIS UNLESS FOR TESTING PURPOSE!
}
