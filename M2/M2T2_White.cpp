/*
CSC 134
M2T2 - Apple Sales Part 2
Brandon White
01/31/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "M2T2 - Apple Sales Part 2" << endl;
    // Simulate selling apples
    // set up variables (nouns) with cin instead of hardcoding their values
    // Declare variables

    string response;
    int apples;
    double price_each = 0.25;
    double tax_percent = 0.10;
    double total = 0;
    
    // Ask for information
    cout << "Hi, what's your name? ";
    cin >> response;
    cout << "Welcome to our orchard. How many apples would you like? " << endl;
    cin >> apples;
    cout << fixed << setprecision(2);
    double total_price = apples * price_each;

    cout << "Each apple has a cost of $" << price_each << " each." << endl;
    cout << "Your total would be $" << total_price <<  ". Would you like to proceed with this purchase? " << endl;
    cin >> response;
    cout << "Great! Here is your receipt." << endl;
    cout << "" << endl;

    double tax_amount = total_price * tax_percent;
    double grand_total = total_price + tax_amount;
    
    cout << "Thank you for shopping with us." << endl;
    cout << "------------------------------" << endl;
    cout << apples << " Apples" << "\t$" << total_price << endl;
    cout << "Tax:" <<  "\t\t" << tax_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total:" << "\t\t$" << grand_total << endl;
      
    return 0;
}