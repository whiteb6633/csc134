/*
CSC134
M3T3
Brandon White
02/21/2024
*/

#include <iostream>
#include <cstdlib> // for rand()
#include <ctime> //for time()
using namespace std;

int main() {

    cout << "Welcome to the craps table" << endl;
     // Define variables 
    int roll;
    int die1, die2;
    int seed;

    // Set random seed
    //cout << "Enter lucky number: ";
    //cin >> seed;
    srand(time(0)); // out lucky # is the time in msec

    // Roll the dice
    // cout << "What did you roll? ";
    // cin >> roll;
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    roll = die1 + die2;

    // Get the results
    cout << "Your roll was: (🎲" << die1 << "+🎲" << die2 << ") -> " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "you win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl; 
    }
    return 0;
}