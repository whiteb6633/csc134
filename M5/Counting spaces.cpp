#include <iostream>
#include <string>
using namespace std;

/**
   Gets the number of spaces in a string.
   @param str any string
   @return the number of spaces in str
*/


int count_spaces(string str)
{
   int spaces = 0;
   for (int i = 0; i < str.length(); i++)
   {
      if (str.substr(i, 1) == " ") {spaces++; }
   }
   return spaces;
} 
   

int main()
{
   string str;
   getline(cin, str);
   cout << count_spaces(str) << endl;
   return 0;
}