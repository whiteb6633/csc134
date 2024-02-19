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
    cout << "Did you side with the stormcloaks or the imperials?" << endl;
    cout << "Type 1 for stormcloaks, Type 2 for imperials:" << endl;
    cin >> choice;
    
  }
  else if (2 == choice) {
  	cout << "You're a monster!" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thanks for playing!" << endl; 
  return 0; 

} 