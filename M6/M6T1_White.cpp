// CSC 134
// M6T1 - Counting Cars
// WhiteB
// 4/8/2024

#include <iostream>
#include <cstdlib>
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

    const int MAX_DAYS = 5;
    const int CARS = (rand() % 50) + 1;
    const int TOTAL = CARS * MAX_DAYS;
    const int AVERAGE = CARS / MAX_DAYS;

void P1() {
    cout << "The Car Counter:" << endl;
    
    int days[MAX_DAYS] = {1, 2, 3, 4, 5};

    /*
    cars need to be randomized
    cars need to be averaged 
    print total 
    */
    
    cout << "The average number of cars that's passed the site this week is " << TOTAL << endl;
    cout << "The average number of cars that passed per day is " << AVERAGE << endl;
}

void P2() {
    cout << "Goodbye" << endl;
}