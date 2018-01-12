#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


void print (int q[]) {

  //Create board
  int i, j, x;
  static int count=1;
  char brd[8][8];
  for (i=0; i<8; i++) 
    for (j=0; j<8; j++)
      brd[i][j]='X';

  //Input Solution
  for (i=0; i<8; i++)
    for (j=0; j<8; j++)
      if (q[j]==i) brd[i][j]='Q';

  //Print
  //for (x=0; x<8; x++) cout<<q[x]; 
  cout<<"Result#"<<count<<endl;
  count++;
  for (i=0; i<8; i++){
    for (j=0; j<8; j++){
      cout<<brd[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
 

  //Reset
  for (i=0; i<8; i++)
    for (j=0; j<8; j++)
      brd[i][j]='X';
}


void bt(int &c){
  c--;
  if(c==-1) exit(1);
};

bool check(int q[8], int c){
  for (int i=0; i<c; i++)
    if (q[i]==q[c]||(c-i)==abs(q[c]-q[i])) return false;
  return true;
};


int main(){
  int q[8]={0}, c=0;
  bool from_backtrack=false;

  while(true){
    while(c<8){
      if(!from_backtrack)
        q[c]=-1;
      while(q[c]<8){
        q[c]++;
        if(q[c]==8){
          bt(c);
          continue;
        }
        if(check(q,c)) break;
      }
      c++;
      from_backtrack=false;
    }
    print(q);
    bt(c);
    from_backtrack=true;
  }
  return 0;
}

