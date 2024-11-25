#include <iostream>
using namespace std;
int main () {
  int a;
  double b;
    int&    r = a;
   double& s = b;
   r=5;
   
   cout << "value of A " << a << endl;
   cout << "Value of a Reference : " << r <<endl;
   s = 11.3;
   cout << "value of b " << b << endl;
   cout << "Value of b Reference : " << s;
}