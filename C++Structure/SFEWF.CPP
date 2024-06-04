#include <iostream>
#include <string>

using namespace std;

struct Student {
  int rollNo;
  string name;
  int age;
  float marks;
};

int main() {
  
  Student student1;

  cout << "Enter student information:\n";
  cout << "Roll No: ";
  cin >> student1.rollNo;
  cout << "Name: ";
  cin.ignore();
  getline(cin, student1.name);
  cout << "Age: ";
  cin >> student1.age;
  cout << "Marks: ";
  cin >> student1.marks;

  cout << "\nStudent Details:\n";
  cout << "Roll No: " << student1.rollNo << endl;
  cout << "Name: " << student1.name << endl;
  cout << "Age: " << student1.age << endl;
  cout << "Marks: " << student1.marks << endl;

  return 0;
}
