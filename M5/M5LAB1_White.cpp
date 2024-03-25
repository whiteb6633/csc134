/*
CSC 134
M5LAB1 - Choose your own adventure
Whiteb
03/25/2024
*/

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_vegetables();
void choice_sushi();
void choice_steak();
void choice_to_store();


int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Load the main menu
  main_menu();
  // When we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  cout << "Main Menu" << endl;
  cout << "Its your choice for dinner tonight!" << endl;
  cout << "Do you want..." << endl;
  cout << "1. A Vegetable spread" << endl;
  cout << "2. Sushi take-out" << endl;
  cout << "3. Steak and eggs" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_vegetables();
  } else if (2 == choice) {
    choice_sushi();
  } else if (3 == choice) {
    choice_steak();
  } else if (4 == choice) {
    cout << "OK, quitting game" << endl;
    return;
  } else {
    cout << "Thats not a valid choice. Please try again" << endl;
    cin.ignore(); // clears the user input
    main_menu(); // try again
  }
}

// Function Definitions
void choice_vegetables() {
  cout << "Checking the refrigerator..." << endl;
  cout << "We're out of broccoli!" << endl;
  cout << "Do you..." << endl;
  cout << "1. choose something else" << endl;
  cout << "2. Go to the store for broccoli" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    main_menu();
  } else if (2 == choice) {
    choice_to_store();
    cout << "See you when you get back!...and grab some salt while you're at it!" << endl;
  }
}

// TODO: Finish these functions
void choice_sushi() {
  cout << "Which restaraunt do you want sushi from?" << endl;
  cout << "1. Sushi Haven" << endl;
  cout << "2. Sushi Bomb" << endl;
  int choice;
  cout << "Choose: " << endl;
  cin >> choice;
  if (1 == choice) {
    cout << "Great choice! Lets go!" << endl;
  } else if (2 == choice) {
    cout << "Look! On the news! Sushi Bomb is on fire!... Sushi Haven it is." << endl;
  }
}
void choice_steak() {
  cout << "Steak sounds great but this doesn't look to fresh." << endl;
  cout << "Should we try it anyway?" << endl;
  cout << "1. Yes" << endl;
  cout << "2. No" << endl;
  int choice;
  cout << "Choose: " << endl;
  cin >> choice;
  if (1 == choice) {
    cout << "You got very sick and ended up hospitalized" << endl;
  } else if (2 == choice) {
    cout << "Well we have to eat something! Lets go to the store." << endl;
    choice_to_store();
  }
}

void choice_to_store() {
  cout << "What should we get out of here?" << endl;
  cout << "1. Frozen Pizza" << endl;
  cout << "2. TV dinners" << endl;
  int choice;
  cout << "Choose: " << endl;
  cin >> choice;
  if (1 == choice) {
    cout << "Can't go wrong with that!" << endl;
  } else if (2 == choice) {
    cout << "You're joking, right?" << endl;
  }
}