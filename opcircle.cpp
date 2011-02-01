#include<cv.h>
#include<cv.hpp>
#include<iostream>
#include<highgui.h>
using namespace std;
using namespace cv;

int main ()
{
int x,y,mofo,rx,ry,x0,y0,r;
Mat a=Mat(Size(500,500),CV_32F);

cout<<"Enter The Co-ordinates of the Centre ..... "<<endl<<"Height :";
cin>>x0;
cout<<"Width :";
cin>>y0;
cout<<"Enter The Radius of the Circle .....";
cin>>r;

mofo=1-r;
rx=1;
ry=-2*r;
x=0;
y=r;
a.at<float>(x0,y0+r)=1.0;
a.at<float>(x0,y0-r)=1.0;
a.at<float>(x0+r,y0)=1.0;
a.at<float>(x0-r,y0)=1.0;

while(x<y)
    {
      if (mofo >=0)
      {
      y--;
      ry+=2;
      mofo+=ry;
      }
      
      x++;
      rx+=2;
      mofo+=rx;
      
      a.at<float>(x0+x,y0+y)=1.0;
      a.at<float>(x0+x,y0-y)=1.0;
      a.at<float>(x0-x,y0+y)=1.0;
      a.at<float>(x0-x,y0-y)=1.0;
      a.at<float>(x0+y,y0+x)=1.0;
      a.at<float>(x0+y,y0-x)=1.0;
      a.at<float>(x0-y,y0+x)=1.0;
      a.at<float>(x0-y,y0-x)=1.0;
    } 
    
namedWindow("mysuraj",CV_WINDOW_AUTOSIZE);
imshow("mysuraj",a);
waitKey(0);

return 0;  
}