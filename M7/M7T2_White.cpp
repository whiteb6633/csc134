// CSC 134
// M7T2 - Rectangles
// whiteb
// 5/1/2024

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

// setWidth assigns a value to the width member.

void Rectangle::setWidth(double w)
{
    width = w;
    if (width < 0) {
        width = -width;
    }
}

//setLength assigns a value to the length number

void Rectangle::setLength(double len)
{
    length = len;
    if (length < 0) {
        length = -length;
    }
}

// getWidth returns the value in the width member.

double Rectangle::getWidth() const{
    return width;
}

// getLength returns the value in the length member.

double Rectangle::getLength() const{
    return length;
}

// getArea returns the product of width times length.

double Rectangle::getArea() const{
    return width * length;
}

// FUNCTION MAIN

int main()
{
    cout << "M7T2 - RECTANGLES" << endl;
    Rectangle box;     // Define an instance of the Rectangle class
    double rectWidth;  // Local variable for width
    double rectLength; // Local variable for length

    // Get the rectangle;s width and length from the user
    cout << "This program will calculate the area of a\n";
    cout << "rectangle. What is the width? ";
    cin >> rectWidth;
    /*if (rectWidth < 1) {
        cout << "Invalid response. No sides can be 0 or negative" << endl;
        return main();
    }*/
    cout << "What is the length? ";
    cin >> rectLength;
    /*if (rectLength < 1) {
        cout << "Invalid response. No sides can be 0 or negative" << endl;
        return main();
    }*/

    //Store the width and length of the rectangle
    //in the box of the object.

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Display the rectangle's data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}
