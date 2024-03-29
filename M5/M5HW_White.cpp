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
    } 
    else {
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

    cout << "The roman numeral for " << number << " is " << numeral;
}

void Q4() {
    cout << "Ugh, you again" << endl;
}

void Q5() {
    cout << "Okay" << endl;
}