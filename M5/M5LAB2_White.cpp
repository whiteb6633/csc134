// CSC 134
// M5LAB2 - Complete A Program
// WhiteB
// 3/27/2024

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double get_Length();
double get_Width();
double get_Area(double length, double width);
void display_data(double length, double width, double area);

int main() {

   double length;
   double width;
   double area;
   double data;

   cout << "What is the length? "; 
   length = get_Length();
 
   
   cout << "What is the width? "; 
    width = get_Width();

    area = get_Area(length, width);
   
    display_data(length, width, area);
   
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double get_Length() {
    double length;
   // type in length
   cin >> length;
   return length;
}

double get_Width() {
    double width;
    // type in width
    cin >> width;
    return width;
}

double get_Area(double length, double width) {
    double area;
    // area equals length times width
    area = length * width;
    return area;
}

void display_data(double length, double width, double area) {
    double data;
    cout << "The length is " << length << endl;
    cout << "The width is " << width << endl;
    cout << "The area is " << area << endl;
}