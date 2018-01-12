#include <iostream>
using namespace std;

//HENRY HE CS111 SECT12E//

bool isPrime(int x){
  int factor=2;
  while (x%factor!=0){
    if (x=factor){return true;}
    else {return false;}
    factor++;
  }
}

int biggestDigit (int x){
  int max=0,remainder;
  while (x!=0){
    remainder=x%10;
    if (remainder>max){max=remainder;}
    x=x/10;
  }
  return max;
}

int main (){
  int n;
  cout<<"Please enter an integer above 1000"<<endl;
  cin>>n;
  while (n<=1000){
    cout<<"Invalid Input, try again"<<endl;
    cin>>n;
  }
  isPrime(n);
  if (isPrime(n)==true){cout<<n<<" is a prime number!"<<endl;}
  else {cout<<n<<" isn't a prime number!"<<endl;}
  cout<<"The largest digit of "<<n<<" is "<<biggestDigit(n)<<endl;
  return 0;
}
