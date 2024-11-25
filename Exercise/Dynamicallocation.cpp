#include<iostream>
using namespace std;
int main() {
  int size;
  cin >> size;
  int *ptr =new int[size];
   if (ptr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1; 
    }
  for (int i = 0; i < size; i++)
  {
    ptr[i];
  }
   delete[] ptr;
  

}