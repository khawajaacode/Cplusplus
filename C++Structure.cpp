#include <iostream>

using namespace std;

// 1. Group Data: Structures bundle variables of different types under one name (e.g., `Book` with title, author, pages).
// 2. Define with `struct`: Use `struct` keyword, structure name, and curly braces `{}` to list member variables (like `title: string`). 
// 3. Create Variables: Declare variables of the structure type to hold specific data (e.g., `Book myBook`).
// 4. Access Members:** Use dot (.) operator to access individual members (e.g., `myBook.title`).
// 5. Benefits:** Organize code and easily pass sets of data to functions. 
struct Book
{
  string title;
  string author;
  int pages;
};

struct Player
{
  string name;
  int age;
  int hits;
};





struct Person

{
  string name;
  int age;
  double height;


};

int main()
{
    cout << "Structure One Info \n:";

    Person one;

    one.name = "Babar Naseer \n";
    one.age = 21;
    one.height = 5.8;

    cout << "Name: " << one.name << endl;

    cout << "Age: " << one.age << endl;

    cout << "Height: " << one.height << endl;

  cout << "Book One Info \n";
    
    Book One;
    One.title = "The Great Gatsby";
    One.author = "F. Scott Fitzgerald";
    One.pages = 256;
    cout  << "Title: " << One.title << endl << "Author: " << One.author << endl << "Pages: " << One.pages << endl;

  Player anoy;
  
  cout << "Player Info : \n";

  cout << "Enter Player Name, Age and Hits on Target : ";

  cin >> anoy.name;

  cin >> anoy.age;

  cin >> anoy.hits;

  cout << "Name of Player  : " << anoy.name << endl;

  cout << "Age : " << anoy.age << endl;

  cout << "Hits on Target : " << anoy.hits << endl;

  

    return 0;
}