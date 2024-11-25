// A cookie recipe calls for the following ingredients:
// • 1.5 cups of sugar
// • 1 cup of butter
// • 2.75 cups of flour
// The recipe produces 48 cookies with this amount of the ingredients. Write a program
// that asks the user how many cookies he or she wants to make, and then displays the
// number of cups of each ingredient needed for the specified number of cookies.


#include<iostream>
using namespace std;
int main() {
  double cookies;
  cin >> cookies;
  double sugar = 1.5 * cookies;
  double butter = 1 * cookies;
  double flour = 2.75 * cookies;
  cout << sugar << " cups of sugar" << endl;
  cout << butter << " cups of butter" << endl;
  cout << flour << " cups of flour" << endl;
  return 0;




}