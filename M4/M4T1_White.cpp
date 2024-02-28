/*
CSC 134
M4T1 -While Loops
WhiteB
2/28/24
*/
#include <iostream>

using namespace std;

int main()
{
    // count from 1 to 10
    // part 1
    cout << "Part One - 1 - 10" << endl;
    int count = 1;
    const int MAX = 10;
    while (count <= MAX) {
        cout << "Counting: " << count << endl;
        // increase the count -- all three do the same thing;85
        // count = count + 1;
        count += 1;
        // count++;
    }
    cout << "Finished" << endl;
    cout << endl;
    cout << "Part Two - Table of Squares" << endl;
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;
    int num = MIN_NUMBER;
    // print the header
    cout << "Number\tNumber Squared" << endl;
    cout << "----------------------" << endl;
    while (num <= MAX_NUMBER) {
        cout << num << "\t" << num * num << endl;
        num++;
    }

    return 0;
}
