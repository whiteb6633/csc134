// M6LAB2
// Arrays, Vectors, and Linked Lists
// CSC 134
// whiteb
// 4/24/24

#include <iostream>
#include <vector>

using namespace std;

void array_example();
void vector_example();
void linked_list();

int main () {
    cout << "M6LAB2" << endl;
    array_example();
    vector_example();
    linked_list();

    return 0;
}

// 3 examples -- full functions
void array_example() {
    cout << "Example 1: Array" << endl;
    const int SIZE = 5; // absolute max
    int max = 3;        // current max
    int nums[SIZE] = {1, 2, 2, 0, 0};
    // add a forth item
    nums[max] = 3;
    max = max+1;
    // print each item 
    for (int i=0; i<max; i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
}

void vector_example() {
    cout << "Example 2: Vector" << endl;
    // requires the #include <vector> command up top
    vector<int> nums; // an empty vector of integers
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    cout << "Vector contains " << nums.size() << " numbers" << endl;
    // index access works like arrays
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
}

void linked_list() {
    cout << "Example 3: Linked List" << endl;
} 