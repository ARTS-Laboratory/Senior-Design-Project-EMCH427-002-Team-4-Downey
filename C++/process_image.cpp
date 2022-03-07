#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

void ProcessFrame(string image_path) {
// Read the image file
 Mat img = imread(image_path);
 Mat OG_img = img.clone();
 // Create kernel for Erode and Dilate
 Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
 //Mat imgGray;
// Convert image to gray-scale
 cvtColor(img, img, COLOR_BGR2GRAY);
// Apply Gaussian blur to image
 GaussianBlur(img, img, Size(5,5), 5, 5);
// Apply Threshold to image
threshold(img,img, 210,255, THRESH_BINARY);
// Erode image
erode(img,img,kernel);
// Dilate image
dilate(img,img,kernel);

vector<vector<Point> > contours;
vector<Vec4i> hierarchy;

findContours(img, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
cout << contours.size() << endl;
drawContours(OG_img, contours, -1, Scalar(255,0,0),2);
int max_id = 0;
int min_area = 400;
//int contour_areas[contours.size()][2];
int contour_areas[contours.size()];
for(int i = 0; i < contours.size(); i++){
    double area = contourArea(contours.at(i));
    contour_areas[i] = 0;
    //contour_areas[i][0] = 0;
    //cout << i << "area\n";
    if(area > min_area){
        cout << area << "area\n";
        contour_areas[i] = area;
        //contour_areas[i][0] = contour_id;
        max_id = i;
        
    }
}

vector<Point> centers; 

Moments M = moments(contours[max_id]);
Point center(M.m10/M.m00, M.m01/M.m00);
//centers.push_back(center);
circle(OG_img, center, 5, Scalar(255,0,0), -1);

//bool state = contour_areas[1][1] == 0;
//cout << state << "\n";
//cout << sizeof(contour_areas)/sizeof(contour_areas[0]) << "\n";

 // Check for failure
 if (img.empty())
 {
  cout << "Could not open or find the image" << endl;
  cin.get(); //wait for any key press
  return;
 }

 //String windowName = "Contour"; //Name of the window

 //namedWindow(windowName); // Create a window

 //imshow(windowName, OG_img); // Show our image inside the created window.

 //imwrite("contour.png", OG_img);
 //waitKey(0); // Wait for any keystroke in the window

 //destroyWindow(windowName); //destroy the created window

 return;
}

int main(int argc, char** argv)
{
string image_path = "/home/localuser/project/images/whole916.png";
ProcessFrame(image_path);
return 0;
}