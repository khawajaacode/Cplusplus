// #include <iostream>
// using namespace std;

// int main() {
//  int num[] = {0, 1, 2, 3, 4, 5, 6, 7};
//   int sum = num[3] + num[2] + num[1];
//   cout << sum << endl;
//   return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "Enter the number of employees: ";
//   cin >> n;

//   int hours[n];

//   cout << "Enter the hours worked by each employee: " << endl;

//   for (int i = 0; i < n; i++)
//   {
//     cout << "Employee " << i + 1 << ": ";
//     cin >> hours[i];
//   }

//   int SUMofhours = 0;

//   for (int i = 0; i < n; i++)
//   {
//     SUMofhours += hours[i];
//   }

//   cout << "The total hours worked is: " << SUMofhours << endl;

//   return 0;
// }
// #include <iostream>

// using namespace std;

// int main()
// {
//   const int Months = 12;
//   int days[Months] = {30, 30, 30, 31, 31, 30, 30, 31, 30, 31, 30, 31};
//   for (int i = 0; i < Months; ++i)
//   {
//     cout <<"Month one " << i + 1  << " has "  <<  days[i] << " Days " << endl;
//   }
// }
#include <iostream>
#include <string>

using namespace std;

int main()
{

    const int Months = 12;

    // Array to store month names
    string monthNames[Months] = {"January", "February", "March", "April", "May", "June",
                                 "July", "August", "September", "October", "November", "December"};

    int days[Months] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int year;
    cout << "Enter the year: ";
    cin >> year;

    for (int i = 0; i < Months; ++i)
    {
        // Check for leap year and adjust February days if necessary
        if (i == 1 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
        {
            days[i] = 29;
        }

        cout << monthNames[i] << " has " << days[i] << " days." << endl;
    }

    return 0;
}
