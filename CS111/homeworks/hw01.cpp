#include <iostream>
using namespace std;
int main () {

  //Henry He CS111 Section12E HW#1
  //Part A:
  double rad, heit;
  cout << "Part A"<<endl;
  cout << "What is the radius of the cylinder?";
  cin >> rad;
  cout << "What is the height of the cylinder?";
  cin >> heit;
  cout <<"Volume of cylinder: "<< 3.14*rad*rad*heit << endl
       <<"Area of cylinder: "<<2*3.14*rad*(rad+heit)<<endl;
  
  //Part B:
  int qrt,dm,nkl,cnt;
  cout << "Part B"<<endl;
  cout << "How many quarters do you have?";
  cin >> qrt;
  cout << "How many dimes do you have?";
  cin >> dm;
  cout << "How many nickels do you have?";
  cin >> nkl;
  cout << "How many cents do you have?";
  cin >> cnt;
  cout << "That makes " <<25*qrt + 10*dm + 5*nkl + cnt
       << " in change.";
  
 return 0;} 
