/*
CSC 134
M2HW1 - Gold
Brandon White
02/13/2024
*/

#include <iostream>
using namespace std;
int main ()
{
    int pizza;
    int slices;
    int guests; 
    int remaining;

    cout << "Question 3: " << endl;
    cout << "How many pizza's do you want to order?" << endl;
    cin >> pizza;
    cout << "How many slices per pizza?" << endl;
    cin >> slices;
    cout << "How many visitors are coming?" << endl;
    cin >> guests;
    
    cout << "You will have " << remaining << " slices left!" << endl;

    return 0;
}