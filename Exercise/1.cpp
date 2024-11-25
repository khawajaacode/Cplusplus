#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cout << "Enter Two Numbers: \n";
  cin >> num1 >> num2;
  cout << "Sum is " << num1 + num2 << endl;
  cout << "Subtraction is " << num1 - num2 << endl;
  cout << "Multiplication is " << num1 * num2 << endl;
  if (num2 != 0)
  {
    cout << "Division is " << num1 / num2 << endl;
  }
  else
  {
    cout << "Cant Divide by Zero";
  }
}
// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     // Write C++ code here
//   int num1, num2;
//   cout << "Enter Two Numbers :";
//   cin >> num1 >> num2;
//   cout << "SUM OF TWO NUMBERS IS " << num1 + num2 << endl;
//   cout << "SUBTRACTION OF TWO NUMBERS IS :" << num1 - num2 << endl;
//   cout << "MULTIPLICATIONS OF TWO NUMBERS IS: " << num1*num2 << endl;
//       if (num2 != 0) {
//         cout << "Division: " << num1 << " / " << num2 << " = " << (float)num1 / num2 << endl;
//         cout << "Modulus: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
//     } else {
//         cout << "Division by zero is undefined." << endl;
//         cout << "Modulus by zero is undefined." << endl;
//     }

//     return 0;
// }