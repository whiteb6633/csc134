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
    cin >> options;
    if (options == 1) {
        P1();
    } 
    if (options == 2) {
        P2();
    }
    return 0;
}

void P1() {
    cout << "The Car Counter...er:" << endl;
    int cars;
    int total;
    int days;
    /*
    cars need to be randomized
    cars need to be averaged then divided by days?
    */
    
    days = {7};
    total = cars / days;
    cout << "The average number of cars that's passed the site is " << total << endl;


}

void P2() {
    cout << "Goodbye" << endl;
}