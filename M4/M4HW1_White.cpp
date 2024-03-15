/*
CSC 134
M4HW1 (GOLD)
WhiteB
03/14/2024
*/

#include <iostream>
using namespace std;

int main() {

    int num, table, product;
    num = 5;
    table = 1;
    product = num * table; 

    cout << "What is the first number?" << endl;
    cin >> num;
    
    for (int i=1; i<= 12; i++) {
        product = num * i;
        cout << num << " times " << i << " equals " << product << endl; 
    }
    return 0;
}