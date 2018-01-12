#include <iostream>
using namespace std;


void starfunction (int n) {
  for (int i = 1; i <= n; i++){cout<<"*";}
}

int main () {
  int n;
  cout<<"Enter the size of the triangle";
  cin>>n;
  for (int r = 1; r<=n; r++) {
    starfunction(n-r+1);
      cout<<endl;
  }
  return 0;
}
