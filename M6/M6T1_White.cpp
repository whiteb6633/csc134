// CSC 134
// M6T1 - Counting Cars
// WhiteB
// 4/8/2024

#include <iostream>
using namespace std;

void P1();
void P2();

int main () {
    int options;
    cout << "Please choose from the following options: " << endl;
    cout << "P1: [1]" << endl;
    cout << "P2: [2]" << endl;
    cin >> option;
    if (option == 1) {
        P1();
    } 
    if (option == 2) {
        P2();
    }
    return 0;
}

int P1() {
    cout << "Hello" << endl;
}

int P2() {
    cout << "Goodbye" << endl;
}