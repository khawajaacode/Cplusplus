
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num1, num2;
    cout << "Performing Arithmetic Operations on Two Numbers. \n";
cin >> num1 >> num2;
int sum = num1 + num2;
cout << "Sum of two number is: "  << sum;
cin >> num1 >> num2;
int subtraction = num1 - num2;
cout << "Subtraction of two number is: "  << subtraction;
cin >> num1 >> num2;
int multi = num1 * num2;
cout << "Multiplication of two number is: "  << multi;
cin >> num1 >> num2;
int division = num1 / num2;
cout << "Division of two number is: "  << division;

    return 0;
}



// #include <iostream>
// using namespace std;

// int main(){
//    int num1, num2;
//    cout << "Enter Two Numbers: \n";
//    cin >> num1 >> num2;
//    cout << "Sum is " << num1 + num2 << endl;
//    cout << "Subtraction is " << num1 - num2 << endl;
//    cout << "Multiplication is " << num1 * num2 << endl;
//    if (num2 != 0){
//    cout << "Division is " << num1 / num2 << endl;
//    }
//    else {
//        cout << "Cant Divide by Zero";
//    }

// }






// #include <iostream>
// using namespace std;
// int main() {
//     // Write C++ code here
//   int num1, num2;
//   cout << "Enter Two Numbers :";
//   cin >> num1 >> num2;
//   cout << "SUM OF TWO NUMBERS IS " << num1 + num2 << endl;
//   cout << "SUBTRACTION OF TWO NUMBERS IS :" << num1 - num2 << endl;
//   cout << "MULTIPLICATIONS OF TWO NUMBERS IS: " << num1*num2 << endl;
//       if (num2 != 0) {
//         cout << "Division: " << num1 << " / " << num2 << " = " << (float)num1 / num2 << endl;
//         cout << "Modulus: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
//     } else {
//         cout << "Division by zero is undefined." << endl;
//         cout << "Modulus by zero is undefined." << endl;
//     }

  
  

//     return 0;
// }








// ALL RELATIONAL OPERATORS 







// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1, num2 ;
//     cout << "Performing Relational Operators: " << endl;
//     cin >> num1 >> num2;
//     if (num1 == num2 )
//     {
//         cout << "True" << endl;
        
//     }
//     else {
//         cout << "False" << endl;
//     }
//     if (num1 != num2 ) {
//         cout << "NUmber One is not Equal To Number Two" << endl;
//     } else {
//     cout << "Numbers are Equal" << endl;
//     }
//     if (num1 < num2)
//     cout << "Number Two is Greater" << endl;
//     return 0;
// }









// // // // #include <iostream>

// // // // int main() {
// // // //     for (int i = 0; i < 5; ++i) {
// // // //         std::cout << "Iteration " << i << std::endl;
// // // //     }

// // // //     return 0;
// // // // }
// // // #include <iostream>

// // // int main() {
// // //     int i = 0;
// // //     while (i < 5) {
// // //         std::cout << "Iteration " << i << std::endl;
// // //         ++i;
// // //     }

// // //     return 0;
// // // }
// // #include <iostream>

// // int main() {
// //     int i = 0;
// //     do {
// //         std::cout << "Iteration " << i << std::endl;
// //         ++i;
// //     } while (i < 100);

// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, fact =1;
//     cout << "Pleased Enter NO. : \n";
//     cin >> n;
//     while (n > 0) {
//         fact =fact *n;
//         n--;
//     }
//     cout << "Fctorial is : \n" << fact ;
    
// }
    
    
    
    
    
    
    
    
    
    
    
    
    













			// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int N, sum = 0;

// //     // Get input from the user
// //     cout << "Enter the value of N: ";
// //     cin >> N;

// //     // Calculate the sum of first N natural numbers
// //     for (int i = 1; i <= N; ++i) {
// //         sum += i;
// //     }

// //     // Display the result
// //     cout << "Sum of the first " << N << " natural numbers is: " << sum << endl;

// //     return 0;






// // }
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Multiplication Table: \n";

//     // Input: Get the number for the multiplication table
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     // Input: Get the range for the multiplication table
//     int range;
//     cout << "Enter the range: ";
//     cin >> range;

//     // Generate and print the multiplication table
//     for (int i = 1; i <= range; ++i) {
//         cout << n << " x " << i << " = " << (n * i) << endl;
//     }

//     return 0;
// }



// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std; 
// int main() {
//     // Write C++ code here
// double length , width;
// cout << "Enter the LENGTH And Width of Rectangle : ";
// cin >> length >> width;
// double area = length * width;
// cout << area;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     double temp;
//     cout << "Enter Temperature in Celsius : ";
//     cin >> temp;
//     double tempFar;
//     cout << "The temp in Fahrenheit : ";
//     tempFar = (temp * 9.0) / 5.0 + 32;
//     cout << tempFar;
    
// }
//  #include <iostream>
//  using namespace std;
//  int main() { 
//      double num1, num2, num3;
//      cout << "Enter Three Numbers : ";
//      cin >> num1 >> num2 >> num3;
//      double average = (num1 + num2 + num3) / 3.0;
//      cout << average;
//  }
//   #include <iostream>
// using namespace std;
//  int main() {
//      int num1 , num2;
//      cout << "Enter Two Numbers : ";
//      cin >> num1 >> num2;
//      cout << "Sum of Numbers : " << (num1 + num2) << endl;
//      cout << "Subtraction of Numbers" << (num1 - num2)<< endl;
//      cout << "Multi of Numbers : " << (num1 * num2)<< endl;
//      cout << "Division of Numbers" << (num1 / num2)<< endl;
     
//     return 0;
     
     
     
//  }
// #include<iostream>agfbbbgghgbbbgfgr grgrggcvfgrrewwwd
// using namespace std;
// int main() {
//      int year;
//     cout << "Enter the number to be checked : ";
//     cin >> year;
//     if (year % 4 == 0)
//         cout << year << " is leap Year.";
//     else
//         cout << year << " is Not Leap Year";
//     return 0;
    
// }
//  #include<iostream>
//  using namespace std;
//  int main() {
//       int age;
//       cout << "Enter Your Age : ";
//       cin >> age;
//       if(age >= 18) {
//       cout  << age << "You are Adult";
//       }
//       else {
//       cout << age << "You are a minor";
//       }
//  }
 
//   #include<iostream>
//   using namespace std;
// int main() {
//  int num;
//  cout << "Enter NO. : ";
//  cin >> num;
//  if (num > 0)
//  cout << num << " is Positive";
//  else if(num < 0 )
//  cout << num << " is Negative";
//  else 
//  cout << num << " the number is Zero";

 
    
    
// }
// #include<iostream>
//   using namespace std;
// int main() {
//     int i = 0;
//     cout << "Natural Numbers" << endl;
// while(i<10) {
//     cout << i;
// ++i;
// }
//     // for (int i = 0; i < 10 ; i++)
    
    
// }
// #include<iostream>
// using namespace std;
// int main () {
//     int num;
//     int factorial = 1;
//     cout << "Enter Nummber : ";
//     cin >> num;
//     for(int i = 1; i <=num; i++)
//     factorial *=i;
//     cout << factorial;
    
// }

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Multiplication Table: ";
    cin >> num;
    for (int i = 1;i<=10; i++)
    cout << num*i <<endl;
}


