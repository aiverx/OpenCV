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
	int rows = 100;
	int cols = 100;
		
	Mat img = Mat::zeros(rows, cols, CV_8UC3);	//CV_8UC3 = 8-bit unsigned integer matrix/image with 3 channels.
	drawCircle(img, Point(50, 50), 20, Scalar(0, 255, 128), -100);

	imshow("Image", img);
	waitKey(0);

	return 0;
};
