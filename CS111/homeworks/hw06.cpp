#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main (){

  //HENRY HE CS111 SECTION12E

  //PART A
  double sum=0;
  int n=0;
  while (n<=1000){
    sum+=sqrt(n);
    n+=2;
  }
  cout<<sum<<endl;

  //PART B
  srand(time(0));
  for (int r=1;r<=10;r++){
    for (int c=1;c<=10;c++){
      int rannum=rand()%9+0;
      if (rannum%2==0){rannum+=1;}
      cout<<rannum<<" ";
    }
    cout<<endl;
  }
  return 0;
}
