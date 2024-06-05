#include <iostream>

using namespace std;

int main()
{

    int *ptr = new int{34};
    double *var = new double{11.22};

    cout << *ptr <<endl << *var;
    cout << "\n" << ptr <<endl << var;
     delete ptr, var;
    

    return 0;
}