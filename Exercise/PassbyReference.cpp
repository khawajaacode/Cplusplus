#include<iostream>

using namespace std;

void swap(int& num, int& num1) {
int  temp;
temp = num;
num = num1;
num1 = temp;





}
int main() {
int a,b;
a = 5; b = 6;
swap(a,b);
cout << a << endl << b;

}