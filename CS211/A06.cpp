#include <cstdlib>
#include <iostream>
using namespace std;

void bt(int &sq){
  sq--;
  if(sq==-1) exit(1);
};

bool check(int q[8], int sq){
  int adj[8][4]={
    {-1, -1, -1, -1},
    {0, -1, -1, -1},
    {1, -1, -1, -1},
    {0, 1, 2, -1},
    {1, 2, 3, -1},
    {0, 3, 4, -1},
    {3, 4, 5, -1},
    {2, 4, 6, -1}};
  for(int i=0; i<sq; i++) if(q[i]==q[sq]) return false;
  for(int j=0; adj[sq][j]!=-1; j++) if(abs(q[sq]-q[adj[sq][j]])==1) return false;
  return true;
};

void print(int q[8]){
  int counter=1;
  cout<<"Result#"<<counter<<endl
      << " " << q[1] << q[2] << endl
      << q[0] << q[3] << q[4] << q[7] << endl
      << " " << q[5] << q[6] << endl <<endl;
  counter++;
}

int main(){
  int q[8]={0}, sq=0;
  bool from_backtrack=0;

  while(1){
    while(sq<8){
      if(!from_backtrack)
	q[sq]=0;
      while(q[sq]<9){
	q[sq]++;
	if(q[sq]==9){
	  bt(sq);
	  continue;
	}
	if(check(q,sq)) break;
      }
      sq++;
      from_backtrack=0;
    }
    print(q);
    bt(sq);
    from_backtrack=1;
  }
  return 0;
}



/* Note2Self: Solving 1D Problem:
1) Before main function, create ok, backtrack, and print functions.
2) Within the main function.....
A) Three necessary variables must be declared: array q, int c, and bool from_backtrack=false


B) Moving onto main function
while(1){
    while(c<#){
      if(!from_backtrack)
        q[c]=0;
      while(q[c]<c){
        q[c]++;
        if(q[c]==#){
          bt(c);
          continue;
        }
        if(check(q,c)) break;
      }
      c++;
      from_backtrack=0;
    }
    print(q);
    bt(c);
    from_backtrack=1;
  }
  return 0;
}

*/
