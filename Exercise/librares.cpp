#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  string book[] = {"Rich Dad Poor Dad", "Think and Grow Rich", "You Can Heal Your Life",
                   "The Art of Happiness", "The Subtle Art of Not Giving a F*ck", "Atomic Habits",
                   "Meditations", "Man's Search for Meaning", "The Hitchhiker's Guide to the Galaxy",
                   // Add 10 more books here
                   "Pride and Prejudice", "To Kill a Mockingbird", "The Lord of the Rings", 
                   "The Catcher in the Rye", "One Hundred Years of Solitude", 
                   "The Great Gatsby", "Invisible Man", "Beloved", "Jane Eyre",
                   "Frankenstein"};
  string author[] = {"Robert Kiyosaki", "Napoleon Hill", "Louise Hay",
                     "Dalai Lama", "Mark Manson", "James Clear",
                     "Marcus Aurelius", "Viktor Frankl", "Douglas Adams",
                     // Add 10 more authors here
                     "Jane Austen", "Harper Lee", "J. R. R. Tolkien", 
                     "J. D. Salinger", "Gabriel García Márquez", 
                     "F. Scott Fitzgerald", "Ralph Ellison", "Toni Morrison", 
                     "Charlotte Brontë", "Mary Shelley"};

  cout << "No.   " << " " << left << setw(40) << "Book Title" << setw(40) << "Book Author" << endl;
  cout << setfill('-') << setw(85) << "" << setfill(' ') << endl; 

  for (int i = 0; i < sizeof(book) / sizeof(book[0]); i++) {
    int z = i + 1;
    cout << z << ". " << left << setw(40) << book[i] << setw(40) << author[i] << endl;
  }
cout << endl;
  return 0;
}
