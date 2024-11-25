

// ******************
// ALTERNATIVE CODE *
// ******************

// LAB 3

#include <iostream>
using namespace std;
int main()
{
  int n, fact = 1;
  cout << "Pleased Enter NO. : \n";
  cin >> n;
  while (n > 0)
  {
    fact = fact * n;
    n--;
  }
  cout << "Fctorial is : \n"
       << fact;
}
