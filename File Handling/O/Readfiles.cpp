#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

    string str;
    ifstream in("sample2.txt");
      while (!in.eof())
      {
        getline(in, str);

    cout << str;
      }
      in.close();


    return 0;
}