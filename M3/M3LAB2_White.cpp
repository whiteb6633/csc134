// CSC 134
// M3LAB2
// Brandon White
// 02/26/2024

#include <iostream>
using namespace std;


int main() {

int numerical;

    cout << "What is your numerical grade? ";
    cin >> numerical;
    cout << endl;
    if (numerical >= 90 && numerical <= 100)
    {
        cout << "Your letter grade is A";
    }
    else if (numerical >= 80 && numerical <= 89)
    {
        cout << "Your letter grade is B";
    }
    else if (numerical >= 70 && numerical <= 79)
    {
        cout << "Your letter grade is C";
    }
    else if (numerical >= 60 && numerical <= 69)
    {
        cout << "Your letter grade is D";
    }
    else if (numerical >= 0 && numerical <=59)
    {
        cout << "Your letter grade is F";
    }
    if (numerical > 100 || numerical < 0)
    {
        cout << "Please enter a value between zero and one-hundred";
    }
    
    return 0;
}