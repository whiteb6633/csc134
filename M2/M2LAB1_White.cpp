/*
M2LAB1
Crate Sales
Whiteb
2/5/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width, height;
    double volume = length * width * height;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double cost = volume * 0.23;
    double charge = volume * 0.5;
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
    cost = volume * 0.23;
    charge = volume * 0.5;
    profit = charge - cost;

    // Print the answer
    cout << fixed << setprecision(2);
    cout << "The volume is: " << volume << endl;
    cout << "The cost is:   $" << cost << endl;
    cout << "The charge is: $" << charge << endl;
    cout << "The profit is  $" << profit << endl;
    return 0;
}