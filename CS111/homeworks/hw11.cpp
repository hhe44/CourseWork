#include <iostream>
#include <string>
using namespace std;

//Henry HE CS111 Section12E HW#11

//Part A
string toUpper (string x){
  for (int i=0; i<x.length(); i++){
    char c = x[i];
    if((c>=97)&&(c<=122)){x[i]=c-32;}
  }
  return x;
}

//Part B
string toLower (string x) {
  for (int i=0; i<x.length(); i++) {
    char c = x[i];
    if ((c>=65)&&(c<=90)){x[i]=c+32;}
  }
  return x;
}

//Part C
bool equals(string x, string y){
  if ((x.length()==y.length()) && (x.find(y)==0))
    return true;
  else return false;
}


//Tests or Checks
int main (){

  string x="Hello";  
  string y="olleH";
  string z="Hello";

  cout<<toUpper(x)<<toUpper(y)<<endl;
  cout<<toLower(x)<<toLower(y)<<endl;

  if (equals(x,y)) //Test4False
    cout<<"Both strings are equal."<<endl;
  else 
    cout<<"The input strings are different."<<endl;

  if (equals(x,z)) //Test4Truth
    cout<<"Both strings are equal."<<endl;
  else
    cout<<"The input strings are different."<<endl;

  return 0;
}
