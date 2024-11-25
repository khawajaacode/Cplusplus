// ALL RELATIONAL OPERATORS

#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  cout << "Performing Relational Operators: " << endl;
  cin >> num1 >> num2;
  if (num1 == num2)
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }
  if (num1 != num2)
  {
    cout << "NUmber One is not Equal To Number Two" << endl;
  }
  else
  {
    cout << "Numbers are Equal" << endl;
  }
  if (num1 < num2)
    cout << "Number Two is Greater" << endl;
  return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 10;

//     cout << "a == b: " << (a == b) << endl;
//     cout << "a != b: " << (a != b) << endl;
//     cout << "a > b: " << (a > b) << endl;
//     cout << "a < b: " << (a < b) << endl;
//     cout << "a >= b: " << (a >= b) << endl;
//     cout << "a <= b: " << (a <= b) << endl;

//     return 0;
// }
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int a, b;

//     // Get input from the user
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;

//     // Set boolalpha to print 'true' or 'false'
//     cout << boolalpha;

//     // Perform comparisons
//     cout << "a == b: " << (a == b) << endl;
//     cout << "a != b: " << (a != b) << endl;
//     cout << "a > b: " << (a > b) << endl;
//     cout << "a < b: " << (a < b) << endl;
//     cout << "a >= b: " << (a >= b) << endl;
//     cout << "a <= b: " << (a <= b) << endl;

//     return 0;
// }