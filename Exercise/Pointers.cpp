// #include <iostream>
// using namespace std;
// int main () {
//   int var = 20;
//   // int ip = 30;
//   int *ip;
//   ip = &var;
   
//   cout << "var = " << var << endl;
//   cout << "*ip = " << *ip << endl;
//   cout << ip << endl;
//   cout << &var;
//   return 0;
// }
#include<iostream>
using namespace std;
int main() {
  int num = 34;
  int *ptr = &num;
  
  cout << ptr << endl;
  cout << *ptr;

}