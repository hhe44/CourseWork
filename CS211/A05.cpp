#include <cstdlib>
#include <iostream>
using namespace std;

void bt(int &c){
  c--;
  if(c==-1) exit(1);
};

bool check(int q[8], int c){                
  for (int i=0; i<c; i++)
    if (q[i]==q[c]||(c-i)==abs(q[c]-q[i])) return false;
  return true;
};

void print(int q[8]){
  for (int i=0; i<8; i++) {cout<<q[i];}
  cout<<endl;
}

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

