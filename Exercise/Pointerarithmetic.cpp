#include<iostream>
using namespace std;
int main() {
  double arr[10] = {1,2,3,4,5,6,7,8,9,10};
  double *ptr;
  for(int i = 0; i<10; i++){
    cout << " " << arr[i] <<endl << "Displaying Array Addrees : "<< endl << (arr + i) <<endl;
  }
  
}