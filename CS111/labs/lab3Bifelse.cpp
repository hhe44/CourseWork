#include <iostream>
using namespace std;
int main () {

  string name;
  double cels, fahr;
  cels = (fahr - 32) * 5/9;
  cout << "What is your name?"<<endl;
  cin >> name;
  cout << "What is today's temperature in Fahrenheit? ";
  cin >> fahr;
  if (fahr >= 85) 
    cout << "Today is very hot"<<endl;
  else 
    cout << "Today's weather is not very hot at all"<<endl;
  
 return 0;} 
