#include <iostream>

using namespace std;

const int ARRAY_SIZE = 5;

void display(int m[]){
  cout << "Display Marks : ";
  for (int  i = 0; i < ARRAY_SIZE; i++)
  {
   cout << "Student " << i + 1 << " : " << m[i] << endl;
  }
  

}

int main() {

  int marks[5] = {23,34,33,35,55};
  display(marks);
  
     

    return 0;
}