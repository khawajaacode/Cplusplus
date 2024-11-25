// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
  // Write C++ code here
  int num1, num2;
  cout << "Performing Arithmetic Operations on Two Numbers. \n";
  cin >> num1 >> num2;
  int sum = num1 + num2;
  cout << "Sum of two number is: " << sum;
  cin >> num1 >> num2;
  int subtraction = num1 - num2;
  cout << "Subtraction of two number is: " << subtraction;
  cin >> num1 >> num2;
  int multi = num1 * num2;
  cout << "Multiplication of two number is: " << multi;
  cin >> num1 >> num2;
  int division = num1 / num2;
  cout << "Division of two number is: " << division;

  return 0;
}