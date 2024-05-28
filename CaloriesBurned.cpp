#include <iostream>

using namespace std;

int main()
{

    double Caloriesburnedpermin = 3.6;
    double Minutes[] = {5, 10, 15, 20, 30};
    double size = sizeof(Minutes)/sizeof(Minutes[0]);
    for(int i = 0; i < size; i++)
    {
      cout << "Calories burned "  << 3.6 *Minutes[i] << endl;
    }
    

    return 0;
}