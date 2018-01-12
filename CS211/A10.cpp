#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


void print (int q[]) {
  int i,j,k,l;
  typedef char box[5][7];
  box bb,wb,bq,wq,*board[8][8];

  //fill in bb=black box and wb=whitebox
  for(i=0;i<5;i++)
    for( j=0;j<7;j++)
      {wb[i][j]=' ';
	bb[i][j]=char(219);
      }

  /*  Draw Picture        
       0 1 2 3 4 5 6
    0  * * * * * * *
    1  * Q * Q * Q *     
    2  * Q * Q * Q *     
    3  * Q Q Q Q Q *     
    4  * * * * * * *     
  */

  //fill in bq=blackqueen
  for(i=0;i<5;i++)
    for(j=0;j<7;j++){
      if (i==0 || i==4) bq[i][j]=' ';
      if (i==1 || i==2) {
	if (j%2==0) bq[i][j]=' ';
	else bq[i][j]=char(219);
      }
      if (i==3) {
	if (j>0 && j<6) bq[i][j]=char(219);
	else bq[i][j]=' ';
      }
    }

  //fill in wq
  for(i=0;i<5;i++)
    for(j=0;j<7;j++){
      if (i==0 || i==4) wq[i][j]=char(219);
      if (i==1 || i==2) {
        if (j%2==0) wq[i][j]=char(219);
        else wq[i][j]=' ';
      }
      if (i==3) {
        if (j>0 && j<6) wq[i][j]=' ';
        else wq[i][j]=char(219);
      }
    }

  //fill board with pointers to bb and wb in alternate positions
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      if((i+j)%2==0)
	board[i][j]=&wb;
      else
	board[i][j]=&bb;



  // take solution and place wq + bq
    for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(q[j]==i){
        if((board[i][j])==&wb) board[i][j]=&bq;
        else board[i][j]=&wq;
      }
    }
  }


  // first print upper border
  cout<<" ";
  for(i=0;i<7*8;i++)
    cout<<'_';
  cout<<endl;

  // now print the board
  for(i=0;i<8;i++)
    for(k=0;k<5;k++)
      {cout<<" "<<char(179); //print left border
	for(j=0;j<8;j++)
	  for(l=0;l<7;l++)
	    cout<<(*board[i][j])[k][l];
	cout<<char(179)<<endl; // at end of line print bar and then newline
      }

  //before exiting print lower border
  cout<<" ";
  for(i=0;i<7*8;i++)
    cout<<char(196);
  cout<<endl;
  

  //board needs to be reset after each solution
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      if((i+j)%2==0)
        board[i][j]=&wb;
      else board[i][j]=&bb;
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

