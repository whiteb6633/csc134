// CSC 134
// M3HW1 - Gold
// Brandon White
// 02/27/2024

#include <iostream>
#include <cstdlib> 
using namespace std;

int main () {

string weapon;
string choice;

    cout << "Question 3" << endl;
    cout << "TRIAL BY FIRE" << endl;
    cout << "To begin your journey, first you must choose a weapon. " << endl;
    cout << "1 = Sword, 2 = Shield" << endl;
    cin >> weapon;

    if (weapon == "1") 
    {
        cout << "You leave the fighting pits to test your mettle. The road forks in front of you. ";
        cout << "Left or Right? " << endl;
        cout << "666 = Left, 777 = Right" << endl;
        cin  >> choice;
        if (choice == "666") {
            cout << "You took the path of the dragon. It was a quick death." << endl;
            cout << "💀GAME OVER💀" << endl;
        }
        else if (choice == "777") {
            cout << "You took the path of lesser men and lived to tell the tale." << endl;
            cout << "🎊!VICTORY!🎊" << endl;
        }
    }
    else if (weapon == "2") {
        cout << "A good defense is the best offense...but not for what lies ahead." << endl;
        cout << "💀GAME OVER💀" << endl;
    }
    cout << endl;

    cout << "Question 4" << endl;
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
    cout << endl;
    return 0;
}