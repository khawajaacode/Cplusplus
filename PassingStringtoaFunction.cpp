#include <iostream>
#include<string>
using namespace std;

void displaycharString(char s[]) {
  cout << "CharString : " <<  s;
}
void displaystring(string S) {
  cout<< "String :  \n" <<  S;
}

int main()
{

    string str;
    char charstring [100];
    
    cout << "Enter a string: ";
    getline(cin, str);

  
  cout << "Enter a char string: ";
  cin.get(charstring, 100);

  displaycharString(charstring);

    displaystring(str);

    return 0;
}