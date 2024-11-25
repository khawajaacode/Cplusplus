#include<iostream>
using namespace std;
int main () {
  int num;
  int *ptr = &num;
  cout << "Enter No. : ";
  cin >> num;
  cout << "The Address of NO. is : " << ptr;
}