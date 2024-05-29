// Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write 
// a program that displays a table showing the number of millimeters that the ocean will 
// have risen each year for the next 25 years.

#include <iostream>


using namespace std;

int main()
{

    double Oceanlevel = 1.5;
    for (int i = 0; i < 25; i++)
    {
      cout << "Year " << i * Oceanlevel << " Ocean level" <<endl;
    }
    

    return 0;
}