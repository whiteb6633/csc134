#include <iostream>
using namespace std;

/*
CSC134
M3T1 - Rectangles
Brandon White
0/14/2024
*/

int main ()
{
    int length;
    int width;
    double area1;
    
    int length2;
    int width2;
    double area2;

    cout << "What is the length of REC1? ";
    cin >> length;
    cout << "What is the width of REC1? " ;
    cin >> width;

    area1 = length * width;
    cout << "The area of REC1 equals " << area1 << endl;
    cout << endl;
    cout << "What is the length of REC2? ";
    cin >> length2;
    cout << "What is the width of REC2? ";
    cin >> width2;
     
    area2 = length2 * width2;
    cout << "The area of REC2 equals " << area2 << endl;
    cout << endl; 

    if (area2>area1) 
    {
        cout << "REC2 is bigger than REC1" << endl;
    }
    if (area2==area1)
    { 
        cout << "Both REC areas are the same" << endl;
    }
    if (area1>area2) 
    {
        cout << "REC1 is bigger than REC2" << endl;
    }

    return 0;
}