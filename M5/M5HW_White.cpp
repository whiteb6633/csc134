// CSC 134
// M5HW - Gold
// WhiteB
// 3/28/2024

#include <iostream>
#include <iomanip>
using namespace std;

void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
double circle();
double rectangle();
double triangle();

int main () {
    cout << "Choose the corresponding number beside the question to proceed or 6 to quit:" << endl;
    cout << "Question 1: [1]" << endl;
    cout << "Question 2: [2]" << endl;
    cout << "Question 3: [3]" << endl;
    cout << "Question 4: [4]" << endl;
    cout << "Question 5: [5]" << endl;
    cout << "Quit:       [6]" << endl;

    int option;
    cin >> option;
    if (1 == option) {
        Q1();
    } else if (2 == option) {
        Q2();
    } else if (3 == option) {
        Q3();
    } else if (4 == option) {
        Q4();
    } else if (5 == option) {
        Q5();
    } else if (6 == option) {
        cout << "Ok, not a problem!" << endl;
    } else {
        cout << "Invalid response" << endl;
        return main();
    }
 
    return 0;
}

void Q1() {

    string month1, month2, month3;
    double rainfall_1, rainfall_2, rainfall_3;
    double average_rainfall;
    double total;

    cout << "Rainfall Calculations" << endl;
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall_1;
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall_2;
    cout << "Enter month: "; 
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall_3;

    cout << fixed << setprecision(2);
    average_rainfall = rainfall_1 + rainfall_2 + rainfall_3;
    total = average_rainfall / 3;

    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << total;
}

void Q2() {
    cout << "The Hyperrectangle....block." << endl;

    double length, width, height;
    double volume;
    
    cout << "Please enter the length: ";
    cin >> length;
    cout << "Please enter the width: ";
    cin >> width;
    cout << "Please enter the height: ";
    cin >> height;

    cout << fixed << setprecision(2);
    volume = length * width * height;

    if (length <= 0) {
        cout << "Invalid response." << endl;
        return Q2();
    } 
    if (width <= 0) {
        cout << "Invalid response." << endl;
        return Q2();
    }
    if (height <= 0) {
        cout << "Invalid response." << endl;
        return Q2();
    }

    cout << "The volume of the block is " << volume;    
}

void Q3() {
    cout << "The Roman Numerals." << endl;
    int number;
    string numeral;
    cout << "Please enter a number (1-10): ";
    cin >> number;
    if (number == 1) {numeral = "I";}
    else if (number == 2) {numeral = "II";}
    else if (number == 3) {numeral = "III";}
    else if (number == 4) {numeral = "IV";}
    else if (number == 5) {numeral = "V";}
    else if (number == 6) {numeral = "VI";}
    else if (number == 7) {numeral = "VII";}
    else if (number == 8) {numeral = "VIII";}
    else if (number == 9) {numeral = "IX";}
    else if (number == 10) {numeral = "X";}
    else if (number < 1 || number > 10) {
        cout << "Invalid response." << endl;
        return Q3();
    }
    cout << "The roman numeral for " << number << " is " << numeral;
}

void Q4() {

    double circle();
    double rectangle();
    double triangle();
    int choice;

    cout << "Geometry Calculator" << endl;
    cout << "Please choose from the following options..." << endl;
    cout << "1. Calculate the Area of a Circle:" << endl;
    cout << "2. Calculate the Area of a Rectangle:" << endl;
    cout << "3. Calculate the Area of a Triangle:" << endl;
    cout << "4. Quit:" << endl;
    cin >> choice;
    if (1 == choice) {
        circle();
    } else if (2 == choice) {
        rectangle();
    } else if (3 == choice) {
        triangle();
    } else if (4 == choice) {
        cout << "Ok, til next time." << endl;
        main();
    } else if(choice =! 1,2,3,4) {
        cout << "Invalid Response! Please choose from the options indicated." << endl;
        return Q4();
    }
}

double circle() {
    double radius;
    double pi = 3.14159;
    double area;
    double square;
    cout << "What is the radius of the circle? ";
    cin >> radius;
    square = radius * radius;
    area = pi * square;
    if (radius < 0) {
        cout << "Invalid response. Please choose a positive number." << endl;
        return circle();
    }
    cout << "The circles area is: " << area;
    return 0;
}

double rectangle() {
        double length;
        double width;
        double area;
        cout << "What is the length of the rectangle? ";
        cin >> length;
        cout << "What is the width of the rectangle? ";
        cin >> width;
        area = length * width;
        if (length < 0) {
            cout << "Invalid response. Please choose a positive number." << endl;
            return rectangle();
        }
        if (width < 0) {
            cout << "Invalid response. Please choose a positive number." << endl;
            return rectangle();
        }
        cout << "The rectangles area is: " << area;
        return 0;
}

double triangle() {
        double base;
        double height;
        double area;
        cout << "What is the length of the base of the triangle? ";
        cin >> base;
        cout << "What is the height of the triangle? ";
        cin >> height;
        area = base * height;
        if (base < 0) {
            cout << "Invalid response. Please choose a positive number." << endl;
            return triangle();
        }
        if (height < 0) {
            cout << "Invalid response. Please choose a positive number." << endl;
            return triangle();
        }
        cout << "The triangles area is: " << area;
        return 0;
}

void Q5() {
    cout << "Distance Traveled" << endl;
    int speed;
    int time;
    int distance;

    cout << "What is the speed of the vehicle in MPH? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;

    distance = speed * time;
    
    cout << "Hour(s)" << "\t\t" << "Distance Traveled" << endl;
    cout << "____________________________" << endl;
    while (time <= distance) {
    cout << time << "\t\t\t" << speed * time << endl;
    time++;
    }
}
    

    