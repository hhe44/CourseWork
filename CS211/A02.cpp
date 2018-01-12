#include <iostream>
using namespace std;

bool equivalent (int a[], int b[], int n){  
  int c=0;
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++) {
      if (a[i]==b[j]) {c+=1;}
    }
  }
  if (c==n)return true;
  else return false;
}

int main () {
  int a[]={1,2,3,4,5};
  int b[]={3,4,5,1,2};
  if (equivalent(a,b,5)==1) cout<<"TRUE";
  else cout<<"FALSE";
  return 0;
}
