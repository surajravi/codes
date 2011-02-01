#include<cv.h>
#include<cv.hpp>
#include<iostream>
#include<highgui.h>
#include<math.h>
using namespace std;
using namespace cv;

int main ()
{
int i,j;  
  Mat a=Mat(Size(255,255),CV_32F);
  for (i=0;i<50;i++)
    {
    j=sqrt(2500-i*i);
    a.at<float>(i+127,127+j)=1.0;
    a.at<float>(i+127,127-j)=1.0;  
    a.at<float>(127-i,127+j)=1.0;
    a.at<float>(127-i,127-j)=1.0;
    }
  
  namedWindow("mysuraj",CV_WINDOW_AUTOSIZE);
  imshow("mysuraj",a);
  waitKey(0);
return 0;  
}