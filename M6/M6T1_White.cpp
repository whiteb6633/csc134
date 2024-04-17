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
    int total = 0;
    int average; 

    for (int i = 0; i < weekdays; i++)
    {
        cout << "How many cars passed on day " << i + 1 << "?";
        cin >> cars;
        total = total + cars;
        
    }
        average =  total / weekdays;
        cout << "The total number of cars that's passed the site this week (Monday - Friday) is " << total << endl;
        cout << "The average number of cars that's passed the site per day is " << average << endl;
}

void P2() {
    cout << "The Car Counter: Arrays." << endl;

    const int WEEKDAYS = 5;
    int cars[WEEKDAYS];
    int total = 0;
    int average; 

    for (int i = 0; i < WEEKDAYS; i++)
    {
        cout << "How many cars passed on day " << i + 1 << "?";
        cin >> cars[i];
        total = total + cars[i];
        
    }
        average =  total / WEEKDAYS;
        cout << "The total number of cars that's passed the site this week (Monday - Friday) is " << total << endl;
        cout << "The average number of cars that's passed the site per day is " << average << endl;
        cout << "The car counts are... " << endl;
        for (int i = 0; i < WEEKDAYS; i++)
        {
            cout << cars[i];
            cout << ",";
        }
        cout << endl;
}