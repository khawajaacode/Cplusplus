#include <iostream>
#include <string>

using namespace std;



int main() {
   int MAX_USERS = 100; 

  string names[MAX_USERS];

  int ids[MAX_USERS];

cout << "Enter Users : ";

int users;

cin >> users;
 
  for (int i = 0; i < users; i++) {
    cout << "Enter name : ";
    cout << "Enter ID: ";
    cin >> names[i];
    cin >> ids[i];
    
  }

  cout << "\nDisplay Users:\n";
  for (int i = 0; i < users; i++) {
      cout << "Name: " << names[i] << endl;
      cout << "ID: " << ids[i] << endl << endl;
    }
  

  return 0;
}
