#include <iostream>
#include<string>
#include<fstream>


using namespace std;

int main()
{
 
 fstream out("sample3.txt" ,ios::out);

  out << "This is the Yest Line" <<endl;

  string str;
  fstream in("sample3.txt", ios::in);

   if (in) {
        while (!in.eof()) {
            getline(in, str);
            cout << "Read from file: " << str << endl;
        }
        in.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }
    fstream app("sample3.txt", ios :: app);


    if(app) {
      app << "This is another File, That is append to the File " << endl;
app.close();
    }
    else {
      cout << "Unable to Open : ";
    }

    return 0;
}