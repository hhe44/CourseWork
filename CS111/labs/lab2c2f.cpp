#include <iostream>
using namespace std;
int main () {

  string name;
  double cels, fahr;
  cels = (fahr - 32) * 5/9;
  cout << "What is your name? ";
  cin >> name;
  cout << "What is today's temperature in Fahrenheit? ";
  cin >> fahr;
  cout << "Hello, " << name << "." << endl 
       << "Today's temperature is:" << cels << " Celsius";
  
 return 0;} 
