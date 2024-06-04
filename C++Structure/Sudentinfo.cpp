#include <iostream>
#include <string>

using namespace std;

struct Student {
  int rollNo;
  string name;
  int age;
  string address;
};

// Function to print students with age 14
void printStudentsByAge(Student students[], int numStudents) {
  cout << "\nStudents with age 14:\n";
  for (int i = 0; i < numStudents; i++) {
    if (students[i].age == 14) {
      cout << students[i].name << endl;
    }
  }
}

// Function to print students with even roll number
void printStudentsByEvenRoll(Student students[], int numStudents) {
  cout << "\nStudents with even roll number:\n";
  for (int i = 0; i < numStudents; i++) {
    if (students[i].rollNo % 2 == 0) {
      cout << students[i].name << endl;
    }
  }
}

// Function to display details by roll number
void displayStudentDetails(Student students[], int numStudents, int rollNo) {
  bool found = false;
  for (int i = 0; i < numStudents; i++) {
    if (students[i].rollNo == rollNo) {
      cout << "\nStudent Details:\n";
      cout << "Roll No: " << students[i].rollNo << endl;
      cout << "Name: " << students[i].name << endl;
      cout << "Age: " << students[i].age << endl;
      cout << "Address: " << students[i].address << endl;
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "Student with roll number " << rollNo << " not found.\n";
  }
}

int main() {
  const int MAX_STUDENTS = 100; // Limit on number of students (adjust as needed)
  Student students[MAX_STUDENTS];
  int numStudents;

  // Get student information from user (loop for multiple students)
  cout << "Enter the number of students (less than or equal to " << MAX_STUDENTS << "): ";
  cin >> numStudents;

  if (numStudents > MAX_STUDENTS) {
    cout << "Error: Exceeds maximum student limit (" << MAX_STUDENTS << ").\n";
    return 1;
  }

  for (int i = 0; i < numStudents; i++) {
    cout << "\nEnter student " << (i + 1) << " information:\n";
    cout << "Roll No: ";
    cin >> students[i].rollNo;
    cout << "Name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, students[i].name);
    cout << "Age: ";
    cin >> students[i].age;

    // Validate age
    while (students[i].age < 11 || students[i].age > 14) {
      cout << "Invalid age. Age must be between 11 and 14.\n";
      cout << "Age: ";
      cin >> students[i].age;
    }

    cout << "Address: ";
    cin.ignore();
    getline(cin, students[i].address);
  }

  // Call functions for student details
  printStudentsByAge(students, numStudents);
  printStudentsByEvenRoll(students, numStudents);

  int searchRollNo;
  cout << "\nEnter roll number to search for student details: ";
  cin >> searchRollNo;
  displayStudentDetails(students, numStudents, searchRollNo);

  return 0;
}
