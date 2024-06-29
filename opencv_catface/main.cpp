#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

string XML_PATH = "haarcascade_frontalcatface.xml";

void main() {
    VideoCapture cap(0);
    Mat img;
    
    CascadeClassifier catCascade;
    catCascade.load(XML_PATH);

    if(catCascade.empty()) {cout << "XML file not loaded" << endl;}
    vector<Rect> cats;

    while(true){
        cap.read(img);
        catCascade.detectMultiScale(img,cats,1.1,10);
        for (int i=0;i<cats.size();i++)
        {
            Mat imgCrop = img(cats[i]);
            //imwrite("/cats/" + to_string(i)+".png",imgCrop);
            rectangle(img,cats[i].tl(),cats[i].br(), Scalar(255,0,255), 3);
        }
        imshow("Image", img);
        waitKey(1);
    }
}
