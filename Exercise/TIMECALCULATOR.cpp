include<iostream>
using namespace std;
int main () {

  cout << "Enter No. of Seconds : ";
  int sec;
  cin >> sec;
  if (sec >= 60) {
    cout << sec / 60 << " Minutes " << sec % 60 <<  "Seconds"  << endl;
  }
  else {
    cout <<   sec << " Seconds " << endl;
  }
  if(sec >= 3600) {
    cout << sec / 3600 << " Hours " << sec % 3600 << " Minutes" << endl;

  }
  if (sec >= 86400 ){
    cout << sec / 86400 << " Days " << sec % 86400 << " Hours" << endl;
  }
  return 0;
}#