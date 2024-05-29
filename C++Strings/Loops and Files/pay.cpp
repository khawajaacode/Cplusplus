#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pennies = 0;
    int numberofdays;

    cout << "Enter the number of days: ";
    cin >> numberofdays;

    if (numberofdays < 0)
    {
        cout << "Invalid Input" << endl;
        return 1; 
    }

    cout << "Day\tSalary\n";
    cout << "------------------\n";

    for (int i = 0; i < numberofdays; i++)
    {
        pennies = ++pennies;
        cout << i + 1 << "\t$" << fixed << setprecision(2) << pennies << "\n";
    }

    int Total = pennies;
    cout << "------------------\n";
    cout << "Total Pay: $" << fixed << setprecision(2) << Total << "\n";

    return 0;
}
