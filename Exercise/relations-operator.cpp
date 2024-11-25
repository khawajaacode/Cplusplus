
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 10;

//     cout << "a == b: " << (a == b) << endl;
//     cout << "a != b: " << (a != b) << endl;
//     cout << "a > b: " << (a > b) << endl;
//     cout << "a < b: " << (a < b) << endl;
//     cout << "a >= b: " << (a >= b) << endl;
//     cout << "a <= b: " << (a <= b) << endl;

//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;

    // Get input from the user
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // Set boolalpha to print 'true' or 'false'
    cout << boolalpha;

    // Perform comparisons
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    return 0;
}
