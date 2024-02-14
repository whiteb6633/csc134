/*
CSC 134
M2HW1 - Gold
Crate Sales
Brandon White
2/13/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width, height;
    double volume = length * width * height;
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    double cost = volume * 0.3;
    double charge = volume * 0.52;
    double profit = charge - cost;

    // Ask for user input
    cout << "Length? ";
    cin >> length;
    cout << "Width? ";  
    cin >> width;
    cout << "Height? ";
    cin >> height; 

    // Do calculations
    volume = length * width * height;
    cost = volume * 0.3;
    charge = volume * 0.52;
    profit = charge - cost;

    // Print the answer
    cout << fixed << setprecision(2);
    cout << "The volume is: " << volume << endl;
    cout << "The cost is:   $" << cost << endl;
    cout << "The charge is: $" << charge << endl;
    cout << "The profit is  $" << profit << endl;
    return 0;
}