#include <iostream>
using namespace std;

int main()
{
  int N, sum = 0;

  // Get input from the user
  cout << "Enter the value of N: ";
  cin >> N;

  // Calculate the sum of first N natural numbers
  for (int i = 1; i <= N; ++i)
  {
    sum += i;
  }

  // Display the result
  cout << "Sum of the first " << N << " natural numbers is: " << sum << endl;

  return 0;
}