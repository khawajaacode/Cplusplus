#include <iostream>
using namespace std;
int main()
{
  int var = 10;
  int y, z;

  // Perform increment and decrement operations
  y = ++var; // Increment var and assign the incremented value to y
  z = --var; // Decrement var and assign the decremented value to z

  // Print the values of var, y, and z
  cout << "var after increment: " << var << endl;
  cout << "y after increment: " << y << endl;
  cout << "z after decrement: " << z << endl;

  return 0;
}