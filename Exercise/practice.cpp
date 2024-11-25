// #include<iostream>
// using namespace std;
// int main() {
//   double mealCost = 400;
//   double taxRate = 0.675;
//   double tipRate = 0.15;
//   double tax = mealCost * taxRate;
//   double tip = mealCost * tipRate;
//   double total = tip * tipRate;
//   cout << mealCost << endl;
//   cout << tax <<endl;
//   cout << tip <<endl;
// cout << total << endl;
//   }
// #include<iostream>
// using namespace std;
// int main() {
//   double Cookies = 40;
//   double calories = 300;
//   int cookiesEatenByUser;
//   cin >> cookiesEatenByUser;
//   double caloriesPerCookie = calories / Cookies;
//   double CaloriesConsumed = caloriesPerCookie * cookiesEatenByUser;
//   cout << "You ate " << CaloriesConsumed << " calories" << endl;
// }
//  #include<iostream>
//  using namespace std;
//  int main() {
//   double length, width;
//   cout << "Enter Lenght"; cin >> length;
//   cout << "Enter Width"; cin >> width;
//   double area = length * width;
//   cout << "Area is " << area << endl;
//  }
//  #include<iostream>
//  using namespace std;
//  int main() {
//   double numerator, denominator;
//   cout << "Enter Numerator : "; cin >> numerator;
//   cout << "Enter Denominator : "; cin >> denominator;
//   if (denominator==0) {
//     cout << "Divide by zero" << endl;
//     return 0;
//   }
//   double result = numerator / denominator;
//   cout << "Result is " << result << endl;

//  }
//  #include<iostream>
//  using namespace std;
//   int main() {
//     int num1, num2, num3;
//     cout << "Enter 3 numbers: ";
//     cin >> num1 >> num2 >> num3;
//     double average = num1 + num2 + num3/3.0;
//     cout << "Average is " << average << endl;
//   }
#include <iostream>
using namespace std;

int main()
{
  int ClassA, ClassB, ClassC;
  int priceA = 15;
  int priceB = 12;
  int priceC = 9;
  cout << "Enter the numbers of Tickets sold of Class A: ";
  cin >> ClassA;
  cout << "Enter the numbers of Tickets sold of Class B: ";
  cin >> ClassB;
  cout << "Enter the numbers of Tickets sold of Class C: ";
  cin >> ClassC;
  double incomeA = ClassA * priceA;
  double incomeB = ClassB * priceB;
  double incomeC = ClassC * priceC;
  cout << "Income from Class A: " << incomeA << endl;
  cout << "Income from Class B : " << incomeB << endl;
  cout << "Income from Class C : " << incomeC << endl;
}
