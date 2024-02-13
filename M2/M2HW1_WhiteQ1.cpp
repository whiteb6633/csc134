/*
CSC 134
M2HW1 - Gold
Brandon White
02/12/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

// Define variables//
double deposit;
double withdrawl;
string name;
int account_number = 654287910;
double balance;

    cout << "Question 1: " << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    cout << endl;
    cout << "Please enter your deposit amount" << endl;
    cin >> deposit;
    cout << "Please enter your withdrawl amount" << endl;
    cin >> withdrawl;
    cout << endl;
    cout << "one moment please..." << endl;
    cout << endl;
    // Do Calculations //
    balance = deposit - withdrawl;

    cout << fixed << setprecision(2);
    cout << "-----------------------" << endl;
    cout << "Name: " << "\t\t" << name << endl;
    cout << "Account #: " << "\t" << account_number << endl;
    cout << "Balance: " << "\t$" << balance << endl;
    cout << "-----------------------" << endl;

    return 0;
}