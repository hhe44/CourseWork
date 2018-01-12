#include <iostream>
using namespace std;
//HENRY HE CS111 SECT12E

int main () {

  //PART A
  int n;
  cout<<"Please enter an integer:";
  cin>>n;
  for (int r=1; r<=n; r++){
    for (int c=1; c<=2*n+2; c++){
      if ((c<=r)||((c-n-1<=r)&&(c>n+1))){cout<<" ";}
      else cout<<"*";
    }
    cout<<endl;
 }

  //PART B 
  for (int r2=1; r2<=n; r2++){
    for (int c2=1; c2<=r2; c2++){
      cout<<c2;
    }
    cout<<endl;
}

  return 0;
}
