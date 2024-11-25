#include<iostream>
using namespace std;
int main() {
  
  double arr[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
  }
   cout << "Displaying Data : ";
   for (int i = 0; i < 10; i++) {
    cout << *(arr + i)<< " ";
   }
}