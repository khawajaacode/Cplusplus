#include <iostream>
#include <string>
#include<bitset>

using namespace std;

int main() {
    string name;
    
    cout << "Enter your name: ";
    getline(cin, name); // Allowing for spaces in the name
    
    cout << "ASCII codes for each character in your name:" << endl;
    
    // Print ASCII values for each character in the name
    for (char c : name) {
        cout << "Character: " << c << " ASCII code: " << int(c) << " Binary: " << bitset<8>(c)<< endl;
    }

    return 0;
}