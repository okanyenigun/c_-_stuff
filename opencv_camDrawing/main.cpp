#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat img;
Point myPoint(0,0);
vector<vector<int>> drawPoints; //{{x,y,color},...}
//Colors: hmin,smin,vmin,hmax,smax,vmax;
vector<int> color1 {5,50,50,15,255,255}; //orange
vector<int> color2 {170,70,50,180,255,255}; //red
//colors for drawing
Scalar colorB2 {0,165,255}; //orange
Scalar colorB1 {0,0,255}; //red
vector<vector<int>> myColors {color1, color2 }; 
vector<Scalar> myColorDraw {colorB1,colorB2};
int AREA_FILTER = 1500;

void detectColor()
{
    //play around with trackbars to determine colors
    Mat img,imgHSV,mask;
    int hmin = 0, smin = 0, vmin = 0;
    int hmax=179, smax=240,vmax=255;
    string path = "colors.png"; // a dummy image for color detection
    img = imread(path);
    cvtColor(img,imgHSV, COLOR_BGR2HSV); //convert image to hsv scale
    namedWindow("Trackbars",(640,200));
    //trackbar for each parameter with min-max scale
    createTrackbar("Hue Min","Trackbars",&hmin,179);
    createTrackbar("Hue Max","Trackbars",&hmax,179);
    createTrackbar("Sat Min","Trackbars",&smin,255);
    createTrackbar("Sat Max","Trackbars",&smax,255);
    createTrackbar("Val Min","Trackbars",&vmin,255);
    createTrackbar("Val Max","Trackbars",&vmax,255);
    while(true){
        Scalar lower(hmin,smin,vmin);
        Scalar upper(hmax,smax,vmax);
        inRange(imgHSV,lower,upper,mask);
        imshow("Image",img);
        imshow("imgHSV",imgHSV);
        imshow("mask",mask);
        waitKey(1);
    }
}

Point getContours(Mat imgDil){

    //find contour and bounding box
    vector<vector<Point>> contours; //vectors example: {{Point(20,30),Point(50,60)},{},{}}
    vector<Vec4i> hierarchy;
    findContours(imgDil,contours,hierarchy,RETR_EXTERNAL,CHAIN_APPROX_SIMPLE);
    vector<vector<Point>> conPoly(contours.size());
    vector<Rect> boundRect(contours.size());
    for (int i=0;i<contours.size();i++){
        int area = contourArea(contours[i]); // area for filteration
        string objectType;
        if(area>AREA_FILTER){
            float peri = arcLength(contours[i],true);
            approxPolyDP(contours[i],conPoly[i],0.02*peri,true);
            //cout << conPoly[i].size() << endl;
            boundRect[i] = boundingRect(conPoly[i]);
            myPoint.x = boundRect[i].x + boundRect[i].width / 2; //draw from edge center
            myPoint.y = boundRect[i].y ; // draw from top
            drawContours(img,conPoly,i,Scalar(255,0,255),2); 
            rectangle(img, boundRect[i].tl(),boundRect[i].br(),Scalar(0,255,0),5);
        }
    }
    return myPoint;
}

vector<vector<int>> findColor(Mat img)
{
    Mat imgHSV;
    cvtColor(img,imgHSV,COLOR_BGR2HSV);
    for(int i=0;i<myColors.size();i++){ //loop through colors given
        Scalar lower(myColors[i][0],myColors[i][1],myColors[i][2]);
        Scalar upper(myColors[i][3],myColors[i][4],myColors[i][5]);
        Mat mask;
        inRange(imgHSV,lower,upper,mask); // get mask image for given  hsv boundaries
        Point myPoint = getContours(mask); //get exact points where we want to draw
        if(myPoint.x !=0 && myPoint.y != 0){
            drawPoints.push_back({myPoint.x,myPoint.y,i});
        }
    }
    return drawPoints;
}

void drawOnCanvas(vector<vector<int>> drawPoints, vector<Scalar> myColorValues )
{
    //draws circles at given points
    for(int i=0;i<drawPoints.size();i++){
        circle(img,Point(drawPoints[i][0],drawPoints[i][1]),10,myColorValues[drawPoints[i][2]],FILLED);
    }
}

void main() {


    VideoCapture cap(0);
    while(true){
        cap.read(img);
        drawPoints = findColor(img);
        drawOnCanvas(drawPoints, myColorDraw);
        imshow("Image",img);
        waitKey(1);
    }
}
