#include <iostream>
#include <fstream>
#include <string>
#include <vector>
 
using namespace std;

// Function to display the editor menu
void displayMenu() {
    cout << "\nText Editor Menu:" << endl;
    cout << "1. New File" << endl;
    cout << "2. Open File" << endl;
    cout << "3. Save File" << endl;
    cout << "4. Edit Text" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to create a new file
void newFile() {
    string filename;
    cout << "Enter the name of the new file: ";
    cin >> filename;

    ofstream file(filename); // Create a new file for writing
    if (file.is_open()) {
        cout << "New file created successfully!" << endl;
        file.close();
    } else {
        cout << "Error creating file." << endl;
    }
}

// Function to open an existing file
void openFile(vector<string>& content) {
    string filename;
    cout << "Enter the name of the file to open: ";
    cin >> filename;

    ifstream file(filename); // Open the file for reading
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            content.push_back(line); // Add each line to the content vector
        }
        file.close();
        cout << "File opened successfully!" << endl;
    } else {
        cout << "Error opening file." << endl;
    }
}

// Function to save the current content to a file
void saveFile(const vector<string>& content) {
    string filename;
    cout << "Enter the name of the file to save: ";
    cin >> filename;

    ofstream file(filename); // Open the file for writing (overwrites existing content)
    if (file.is_open()) {
        for (const string& line : content) {
            file << line << endl;
        }
        file.close();
        cout << "File saved successfully!" << endl;
    } else {
        cout << "Error saving file." << endl;
    }
}

// Function to edit the text content (basic implementation)
void editText(vector<string>& content) {
    int choice;
    cout << "\nEdit options:" << endl;
    cout << "1. Insert line" << endl;
    cout << "2. Delete line" << endl;
    cout << "3. Edit line" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int lineNumber;
            string newLine;
            cout << "Enter the line number after which to insert (0 for beginning): ";
            cin >> lineNumber;
            cout << "Enter the new line: ";
            getline(cin, newLine); // Get entire line including spaces

            content.insert(content.begin() + lineNumber, newLine);
            cout << "Line inserted successfully!" << endl;
            break;
        }
        case 2: {
            int lineNumber;
            cout << "Enter the line number to delete: ";
            cin >> lineNumber;

            if (lineNumber >= 0 && lineNumber < content.size()) {
                content.erase(content.begin() + lineNumber);
                cout << "Line deleted successfully!" << endl;
            } else {
                cout << "Invalid line number." << endl;
            }
            break;
        }
        case 3: {
            int lineNumber;
            string newLine;
            cout << "Enter the line number to edit: ";
            cin >> lineNumber;

            if (lineNumber >= 0 && lineNumber < content.size()) {
                cout << "Enter the new content for the line: ";
                getline(cin, newLine);
                content[lineNumber] = newLine;
                cout << "Line edited successfully!" << endl;
            } else {
                cout << "Invalid line number." << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }
}
