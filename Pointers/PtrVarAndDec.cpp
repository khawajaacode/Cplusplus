// Pointers are the Variable That stores the address of Other Variables.

#include <iostream>

using namespace std;

int main()
{

    int num = 32;
    int *ptr = &num;
    
      cout << "Address of Num : " << ptr << endl;

      cout << "Value of Number : " << *ptr;

    return 0;
}