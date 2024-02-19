// CSC 134
// M3LAB1
// Brandon White
// 02/19/2024

#include <iostream>
using namespace std;

int main() {

  int choice; 

  cout << "Did you play Skyrim?" << endl;
  cout << "Type 1 for yes, Type 2 for no: "; 
  cin >> choice;

  if (1 == choice) {
  	cout << "Then you are an amazing person!" << endl;
    cout << endl; 
    cout << "Did you side with the stormcloaks or the imperials?" << endl;
    cout << "Type 1 for stormcloaks, Type 2 for imperials: ";
    cin >> choice;
  if (1 == choice) 
    cout << "Its the right thing to do." << endl;
  else if (2 == choice)
    cout << "You should be ashamed of yourself!" << endl;
  }
  else if (2 == choice) {
  	cout << "You're a monster!" << endl;
    cout << endl;
    cout << "Do you like RPGs?" << endl;
    cout << "Type 1 for yes, Type 2 for no: ";
    cin >> choice;
  if (1 == choice)
    cout << "Ok, we can work with this." << endl;
  else if (2 == choice)
    cout << "Strike two my friend!" << endl; 
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  cout << endl;
  cout << "Wait! Don't leave!" << endl; 
  return 0; 

} 