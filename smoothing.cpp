#include<cv.h>
#include<cv.hpp>
#include<iostream>
#include<highgui.h>
using namespace std;
using namespace cv;

int main ()
{
int i,j;  
Mat mofo=imread("/home/suraj/Desktop/RSS/images/head2.jpg",0);
//Mat a=Mat(mofo.size(),mofo.type());
Mat a;
resize(mofo,a,Size(mofo.rows/2,mofo.cols/4));
Mat b=Mat(a.size(),a.type());
GaussianBlur(a,b,Size(7,7),2,0);
Canny(b,b,1200,210,5);
namedWindow("mysuraj",CV_WINDOW_AUTOSIZE);
imshow("mysuraj",b);
waitKey(0);
return 0;  
}