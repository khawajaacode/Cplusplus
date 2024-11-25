// #include <iostream> 
// #include <iomanip> 
// using namespace std; 
// int main() 
//  { 
//  double measurement; 
//  cout << "Enter a length in inches, and I will convert\n"; 
//  cout << "it to centimeters: "; 
//  cin >> measurement; 
//  convert(&measurement); 
//  cout << fixed << setprecision(4); 
//  cout << "Value in centimeters: " << measurement << endl; 
//  return 0; 
//  } 
//  #include <iostream> 
// #include <iomanip> 
// using namespace std; 
// int main() {

//      double var = 21;
//      double *ptr = &var;
//      cout << "The value of var is " << var <<  "ADDREESS : "  << ptr << endl;
// }
//  #include <iostream> 
// #include <iomanip> 
// using namespace std; 
// int main() {
//   double num;
//   double *ptr = &num;
//   cout << "Enter a number: ";
//   cin >> num;
//   cout << "The value of num is " << num << " and its address is " << ptr << endl;
// }







//  #include <iostream> 
// #include <iomanip> 
// using namespace std; 
// int main() {
//   int arr[10];
//   int *ptr = arr;
//   cout << "Enter 10 numbers: ";
//   for (int i = 0; i < 10; i++) {
//     cin >> *(ptr + i);
//     cout << "ADDRESS : " << ptr +i << endl;
//   }
// }
//  #include <iostream> 
// #include <iomanip> 
// using namespace std;

// int swap(int& a, int & b) {
//   int temp = a;
//   a = b;
//   b= temp;
//   return 0;
// }

// int main() {


//   int num1 = 12 , num2 = 22;
//   swap(num1 ,  num2);
//   cout << num1 << endl << num2;
// }
 #include <iostream> 
#include <iomanip> 
using namespace std; 
int main()

 {
      int num = 12;
      int *ptr = new int[num];
      cout << setw(10) <<num <<endl;
      delete ptr;
      double *var = new double{45};
      cout << setw(20) << "ADDRESS : \n" << var << "Value\n "<< *var <<  endl;

 }