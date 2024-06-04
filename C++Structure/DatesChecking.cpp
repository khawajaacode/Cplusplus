#include <iostream>

using namespace std;

// Define the structure for date
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
bool areDatesEqual(const Date& date1, const Date& date2) {
    return (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year);
}

int main() {
    Date date1, date2;

    // Input first date from the user
    cout << "Enter the first date (day month year): ";
    cin >> date1.day >> date1.month >> date1.year;

    // Input second date from the user
    cout << "Enter the second date (day month year): ";
    cin >> date2.day >> date2.month >> date2.year;

    // Compare the dates
    if (areDatesEqual(date1, date2)) {
        cout << "Dates are equal" << endl;
    } else {
        cout << "Dates are not equal" << endl;
    }

    return 0;
}
