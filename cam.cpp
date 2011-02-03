#include "cv.h"
#include "highgui.h"

using namespace cv;

int main(int, char**)
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
    namedWindow("edges",1);
    for(;;)
    {
        Mat frame;
        cap >> frame; // get a new frame from camera
        cvtColor(frame, edges, CV_BGR2GRAY);
        GaussianBlur(edges, edges, Size(5,5),2);
        Canny(edges, edges,40 , 30, 3);
//        for (int i=0;i<frame.rows;i++)
//          for (int j=0;j<frame.cols;j++)
//		if (edges.at<int>(i,j)>0)frame.at<int>(i,j)=255;
	    
	imshow("edges", edges);
        if(waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
