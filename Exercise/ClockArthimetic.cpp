#include <iostream>

using namespace std;

int main() {
  int current_time, duration, new_time;

  // Get user input for current time (0-11)
  cout << "Enter current time (0-11): ";
  cin >> current_time;

  // Validate current time input
  if (current_time < 0 || current_time > 11) {
    cout << "Invalid current time. Please enter a value between 0 and 11." << endl;
    return 1; // Exit program with error code
  }

  // Get user input for duration (positive or negative)
  cout << "Enter duration to add/subtract (hours): ";
  cin >> duration;

  // Calculate new time using modulo
  new_time = (current_time + duration) % 12;

  // Handle negative remainders (for subtraction)
  if (new_time < 0) {
    new_time += 12;
  }

  // Display the result
  cout << "New time after " << duration << " hours: " << new_time << endl;

  return 0;
}
