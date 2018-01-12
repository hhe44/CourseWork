#include <iostream>
using namespace std;

//HENRY HE CS211 Lab Assignment#1

int main () {
  cout<<"Table of Perfect Squares"<<endl
      <<"Number"<<"     "<<"Square"<<"     "<<"Values"<<endl;
  for (int i=1;i<=9;i++){
    cout<<i<<"           "<<i<<"*"<<i<<"         "<<i*i<<endl;
  }
  for (int i=10;i<=50;i++){
    cout<<i<<"          "<<i<<"*"<<i<<"       "<<i*i<<endl;
  }
  return 0;
}
