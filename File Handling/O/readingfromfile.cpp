#include <iostream>

#include<string>

#include<fstream>


using namespace std;

int main()
{

  string Reading;

  ifstream in("sample1.txt");
      getline(in, Reading);
      cout << Reading;
    

    return 0;
}