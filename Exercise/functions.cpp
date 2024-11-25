#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << "The factorial of " << num << " is " << factorial(num) << endl;
  return 0;
}
// #include <iostream>

// using namespace std;

// bool isPalindrome(string str)
// {
//   int left = 0;
//   int right = str.length() - 1;

//   while (left < right)
//   {
//     if (str[left] != str[right])
//       return false;
//     left++;
//     right--;
//   }
//   return true;
// }

// int main()
// {
//   string input;
//   cout << "Enter a String: ";
//   cin >> input;
//   if (isPalindrome(input))
//     cout << "Yes, it's a palindrome." << endl;
//   else
//     cout << "No, it's not a palindrome." << endl;
//   return 0;
// }
// #include <iostream>
// using namespace std;
// void fibonacciSeries(int n)
// {
//   int a = 0, b = 1, c;
//   for (int i = 0; i < n; i++)
//   {
//     cout << a << " " << b << endl;
//     c = a + b;
//     a = b;
//     b = c;
//   }
// }

// int main()
// {

//   int n;

//   cin >> n;
//   fibonacciSeries(n);
//   return 0;
// }