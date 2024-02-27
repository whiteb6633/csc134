// CSC 134
// M3HW1 - Gold
// Brandon White
// 02/26/2024

#include <iostream>
#include <iomanip>
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
    cout << endl;

    // Question 2

    double price;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;
    double tip = 0.15;

    cout << "Question 2" << endl;
    cout << "What was the price of the meal? ";
    cin >> price;

    cout << "Please press 1 for dine-in or 2 for take-away. ";
    string choice;
    cin >> choice;
    cout << endl;

    tax_amount = price * tax_percent;
    tip = price * 0.15;
    total = price + tax_amount + tip;
    cout << fixed << setprecision(2);
    // Does Tip need to show on reciept for option 2?
    if (choice == "1") {
    cout << "Meal:"    << "\t\t$" << price << endl;
    cout << "Tax:"    <<  "\t\t$" << tax_amount << endl;
    cout << "Tip:"        "\t\t$" << tip << endl;
    cout << "----------------------" << endl;
    cout << "Total:"  <<  "\t\t$" << total << endl;
    }
    else if (choice == "2") {
    total = price + tax_amount;
    cout << "Meal"    <<  "\t\t$" << price << endl;
    cout << "Tax:"    <<  "\t\t$" << tax_amount << endl;
    cout << "----------------------" << endl;
    cout << "Total:"  <<  "\t\t$" << total << endl;
    }

    return 0;
}