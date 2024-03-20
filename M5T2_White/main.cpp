/*
CSC 134
M5T2 - Input and Output for functions
WhiteB
3/20/2024
*/
#include <iostream>
using namespace std;

// Function prototypes here
// a mani () function
// a square function
// a PrintAnswer function
int square(int);
void printAnswerLine (int, int);

// Function definitions here

int main()
{
    cout << "M5T2" << endl;
    cout << "Printing a table of squares" << endl;
    cout << endl;
    cout << "Num\t\t    Num Squared" << endl;
    cout << "------------------------------" << endl;

    // In a loop,
    // find the square of the number
    // then call PrintAnswerLine with number and square
    // TODO: do this but ten times

    int num, num_squared;
    // num = 1;
    for (int num=1; num <= 10; num++){
    num_squared = square(num);
    printAnswerLine(num, num_squared);
    }
    return 0;
}
int square(int number) {
    // input: a number
    // output: number squared
    int answer = number * number;
    return answer;
}

void printAnswerLine(int first, int second) {
    // print two numbers with tab separation
    cout << first << "\t\t\t" << second << endl;
}
