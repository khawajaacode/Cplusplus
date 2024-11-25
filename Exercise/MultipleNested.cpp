// #include<iostream>
// using namespace std;
// int main () {
//   double testScore;
//   cout << "Enter your test score: ";
//   cin >> testScore;

//   if (testScore >= 90) {
//     cout << "You got an A!" << endl;
//   }
//   else if (testScore >= 80) {
//     cout << "You got a B!" << endl;
//     }
//   else if (testScore >=70) {
//     cout << "You got a C!" << endl;
//   }
//   else if (testScore >= 60) {
//     cout << "You got a D!" << endl; 
// } 
// else {
//   cout << "You got an F!" << endl;
// }
// }
// #include<iostream>
// using namespace std;
// int main () {
//   int num;
//   cout << "Enter a number: ";
//   cin >> num;

//   if (num % 2 == 0 ) {
//     cout << num << " is even" << endl;
//   }
//   else {
//     cout << num << " is odd" << endl;
//   }
// }
#include<iostream>
using namespace std;
int main() {
  int hour;
  cout << "Enter the Starting Hourr : " ;
  cin >> hour;
  int sum;
  cout << "Enter the Starting Minute : " ;
  cin >> sum;



  int endHour = sum % 12;
  int endMinute = sum / 12;

  cout << "The End Time is " << endHour << ":" << endMinute << endl;
}