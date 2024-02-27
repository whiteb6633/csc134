// CSC 134
// M3HW1 - Gold
// Brandon White
// 02/26/2024

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Question 1

    cout << "Question 1" << endl; 
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no. ";

    string response; 
    cin >> response;
    cout << endl;

    if (response == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }    
    else if (response == "no" ) {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure… that's OK." << endl;
    }
    return 0;
}