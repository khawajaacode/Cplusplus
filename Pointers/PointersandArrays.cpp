#include <iostream>

using namespace std;

int main()
{

    int arr[100];
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;

    cout << "Enter The Numbers " << endl;
    for (int i = 0; i <size ; i++)
    {
      cin >> arr[i];
      cout  << "You Entered the Value : "<< arr[i] <<endl;
      cout <<"The Address of Value is  :" << ptr + i << endl;
    }
    

    return 0;
}