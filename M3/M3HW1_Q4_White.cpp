// CSC 134
// M3HW1 - Gold
// Brandon White
// 02/28/2024

#include <iostream>
#include <cstdlib> // for rand()
using namespace std;

int main () {

    int number1, number2;
    int answer;
    srand(time(0));
    number1 = (rand() % 50) + 1;
    number2 = (rand() % 25) + 1;

    cout << "What is " << number1 << " plus " << number2 << "?" << endl; 
    cin >> answer;
    if (answer == number1 + number2) {
        cout << "Correct!" << endl;
    }
    else if (answer != number1 + number2) {
        cout << "Incorrect" << endl;
    }
    return 0;
}