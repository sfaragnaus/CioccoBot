#include "recognition.h"
#include <iostream>
#include <opencv2/opencv.hpp>

bool setup(void)
{
	return true;
}

void kinematicInfo(float *speed, float *acc, float *angular, float *angularAcc, float delta)
{
	*speed = 0;
	*acc = 0;
	*angular = 0;
	*angularAcc = 0;
}

void captureImage(unsigned char *pixelDataSx, unsigned char *pixelDataDx, int w, int h, int stride, float delta)
{
	//sx cam
	cv::Mat camSx(h, w, CV_8UC3, pixelDataSx);
	cv::Mat flippedSx;
	cv::flip(camSx, flippedSx, 0);
	cv::cvtColor(flippedSx, flippedSx, cv::COLOR_RGB2BGR);

	//dx cam
	cv::Mat camDx(h, w, CV_8UC3, pixelDataDx);
	cv::Mat flippedDx;
	cv::flip(camDx, flippedDx, 0);
	cv::cvtColor(flippedDx, flippedDx, cv::COLOR_RGB2BGR);

	//DO NOT ENABLE THESE UNLESS FOR TESTING PURPOSE!
	cv::imwrite("leftcam.jpg", flippedSx);
	cv::imwrite("rightcam.jpg", flippedDx);
}
