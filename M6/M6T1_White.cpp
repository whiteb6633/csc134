// CSC 134
// M6T1 - Counting Cars
// WhiteB
// 4/15/2024

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
    cout << "The Car Counter:" << endl;
    int weekdays = 5;
    int cars;
    int total;
    int average; 

    for (int i = 10; i <= 100; i++)
    {
        cars = i;
        total = cars * weekdays;
        average =  total / weekdays;
    }
    
        cout << "The total number of cars that's passed the site is " << total << endl;
        cout << "The average number of cars that's passed the site per day is " << average << endl;
}

void P2() {
    cout << "The Car Counter: Arrays." << endl;
    int weekdays;
    int cars;
    int total;
    int average; 

    for (int i = 10; i <= 100; i++)
    {
        cars = i;
        total = cars * weekdays;
        average =  total / weekdays;
    }
    
        cout << "The total number of cars that's passed the site is " << total << endl;
        cout << "The average number of cars that's passed the site per day is " << average << endl;
}