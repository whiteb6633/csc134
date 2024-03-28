// CSC 134
// M5HW - Gold
// WhiteB
// 3/28/2024

#include <iostream>
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
        cout << "Ok, not a problem" << endl;
    } else if (option =! 1,2,3,4,5,6) {
        cout << "Invalid response" << endl;
        return main();
    }
 
    return 0;
}

void Q1() {
    cout << "Hello World" << endl;
}

void Q2() {
    cout << "Goodbye World" << endl;
}

void Q3() {
    cout << "Hello again" << endl;
}

void Q4() {
    cout << "Ugh, you again" << endl;
}

void Q5() {
    cout << "Okay" << endl;
}