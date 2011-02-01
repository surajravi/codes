#include<cv.h>
#include<cv.hpp>
#include<iostream>
#include<highgui.h>
using namespace std;
using namespace cv;

int main ()
{
int i,j;  
Mat mofo=imread("/home/suraj/Desktop/RSS/images/head.jpg",0);
//Mat a=Mat(mofo.size(),mofo.type());
Mat a;
resize(mofo,a,Size(mofo.rows/2,mofo.cols/4));
Mat b=Mat(a.size(),a.type());
Canny(a,b,1000,700,5);
namedWindow("mysuraj",CV_WINDOW_AUTOSIZE);
imshow("mysuraj",b);
waitKey(0);
int max=0;
for (i=0;i< b.rows;i++)
  for (j=0;j<b.cols;j++)
    if (b.at<int>(i,j) > max) max=b.at<int>(i,j);
cout<<b.at<float>(110,0)<<endl;
return 0;  
}