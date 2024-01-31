/*
CSC 134
M2T2 - Apple Sales Part 2
Brandon White
01/31/2024
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "M2T2 - Apple Sales Part 2" << endl;
    // Simulate selling apples
    // set up variables (nouns) with cin instead of hardcoding their values
    // Declare variables

    string name;
    int apples;
    double price_each = 0.25;
    
    // Ask for information
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Welcome to our orchard. How many apples would you like? " << endl;
    cin >> apples;
    double total_price = apples * price_each;
    cout << "Each apple has a cost of $" << price_each << " each." << endl;
    cout << "Your total would be $" << total_price <<  ". Would you like to proceed with this purchase? " << endl;
    cin >> name;
   
    return 0;
}