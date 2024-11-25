#include <iostream>

using namespace std;

double constref(const int& n1, const int& n2){
   return n1 + n2;
}


int main() {
  double num1,num2;
cout <<"Enter Two No. : " ;
cin >> num1 >> num2;
int sum = constref(num1, num2);
cout << "Sum is : " << sum << endl;
}