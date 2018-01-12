#include <iostream>
using namespace std;
int main (){

  //Henry He CS111 Section12E HW#2
  //Part A
  double dnum;
  cout << "Enter a number greater than 0 and less than 10."<<endl;
  cin >> dnum;
  if (dnum >=10)
    cout << "That number is too high.";
  else if (0 >= dnum)
    cout << "That number is too low.";
  else 
    cout << "The square of that number is: " << dnum * dnum <<endl;

  //Part B
  int inum;
  cout << "Please input a 3-digit positive integer"<<endl;
  cin >> inum;
  if (inum < 100)
    cout << "INVALID INPUT - PROGRAM TERMINATED :(";
  else if (inum > 999)
    cout << "INVALID INPUT - PROGRAM TERMINATED :(";
  else
    cout << "The product of all digits in "
         << inum
         << " is "
	 <<(inum/100)*((inum/10)%10)*(inum%10);
return 0;}
