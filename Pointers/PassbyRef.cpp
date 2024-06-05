#include <iostream>

using namespace std;

int PassByReference(int *pass) {

  return *pass * *pass * *pass; 
}


int main()
{

    int num = 212;
    int *ptr = &num;

  cout << PassByReference(&num);

    return 0;
}