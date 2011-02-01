#include<cv.h>
#include<cv.hpp>
#include<iostream>
#include<highgui.h>
using namespace std;
using namespace cv;

int main ()
{
Mat mofo=imread("/home/suraj/Desktop/RSS/images/cameraman.tif",0);
Mat a=Mat(mofo.size(),mofo.type());
Canny(mofo,a,100,200,3);
namedWindow("mysuraj",CV_WINDOW_AUTOSIZE);
imshow("mysuraj",a);
waitKey(0);
return 0;  
}