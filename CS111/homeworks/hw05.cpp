#include <iostream>
using namespace std;
//HENRY HE CS111 SECT12E

int main () {

  //PART A
  int n;
  cout<<"Please enter an integer:";
  cin>>n;
  while ((n<=0)||(n>30)||(n%2==0)){
    cout<<"INVALID INPUT-TRY AGAIN;";
    cin>>n;
  }

  //PART B - DIAGRAM 1
  for (int r=1; r<=n; r++){
    for (int c=1; c<=n; c++){
      if ((c==r)||(c+r==n+1)){cout<<"*";}              //CROSS
      else if ((c==(n/2)+1)||(r==(n/2)+1)){cout<<"*";} //PLUS
      else cout<<" ";
    }
    cout<<endl;
 }
  cout<<endl;

  //PART B - DIAGRAM 2
  for (int r2=1;r2<=n;r2++){
    for (int c2=1;c2<=n;c2++){
      if(((n/2+1==c2)||(n/2+1==r2))&&((r2+c2==n)||(r2+c2==n+2)))cout<<" ";
      else if ((r2==n/2)||(c2==n/2)||(r2==n/2+2)||(c2==n/2+2))cout<<"*";
      else if (((r2+c2==n/2*3+2)||(r2+c2==n/2+2))&&(n/2+1==c2))cout<<"*";
      else if (((r2+c2==n/2*3+2)||(r2+c2==n/2+2))&&(n/2+1==r2))cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }

  //Note2Self - I probably want to declare formulas as variables
  //e.g int middle= n/2+1

  return 0;
}
