#include <iostream>

using namespace std;

int main()
{

     double Charges = 2500;
     int Total = 0;
     double increse = .04; 
     for (int i = 0; i < 6; i++)
     {
     Charges += Charges + increse;
     Total += Charges ;
     }
     cout << Total;
     
    return 0;
}