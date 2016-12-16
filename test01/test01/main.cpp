#include <opencv2\opencv.hpp>
using namespace cv;

#ifdef _DEBUG
#pragma comment(lib, "opencv_core2413d.lib")
#pragma comment(lib, "opencv_highgui2413d.lib")
#else
#pragma comment(lib, "opencv_core2413.lib")
#pragma comment(lib, "opencv_highgui2413.lib")
#endif

int main()
{
	Mat img = imread("Tulips.jpg");
	imshow("test image", img);
	waitKey(5000);

	return 0;
}