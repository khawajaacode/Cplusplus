#include <iostream>

using namespace std;



int doSomething(int* x, int* y) {
  int temp = *x;
  *x = (*y) * 10;
  *y = temp * 10;
  return *x + *y;
}

int main() {
  int num1 = 4;
  int num2 = 5;
  int result = doSomething(&num1, &num2);
  cout << "The result is: " << result << endl;
  return 0;
}
