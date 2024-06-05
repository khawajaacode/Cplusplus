#include <iostream>

#include<fstream>

using namespace std;

int main()
{
string st = "Babar";

    ofstream out("sample.txt");
  out << st;
    return 0;
}