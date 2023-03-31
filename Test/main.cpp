#include "main.h"
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;


/*
	This function returns OpenCV version
*/
string getOpenCVversion() {
	return CV_VERSION;
}

/*
	This function draws circle in OpenCV
*/
void drawCircle(Mat& img, Point pt, int radius, Scalar color, int thickness = 1, int lintType = 8, int shift = 0) {

	circle(img, pt, radius, color, thickness, lintType, shift);
}


/*
	Main Program
*/
int main()
{
	//Check OpenCV version
	cout << "OpenCV version: " << getOpenCVversion() << endl;

	//Create a blank image
	int rows = 500;
	int cols = 500;
		
	Mat img = Mat::zeros(rows, cols, CV_8UC3);	//CV_8UC3 = 8-bit unsigned integer matrix/image with 3 channels
	//Draw Donuts
	drawCircle(img, Point(100, 100), 50, Scalar(120, 255, 255), 50);
	drawCircle(img, Point(200, 100), 50, Scalar(120, 0, 255), 50);

	imshow("Image", img);
	waitKey(0);

	return 0;
};
