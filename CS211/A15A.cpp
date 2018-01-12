// recursive eight cross
#include <iostream>
#include <cmath>
using namespace std;

bool ok(int * q, int sq){
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
}

void print(int q[8]){
  static int counter=1;
  cout<<"Result#"<<counter<<endl
      << " " << q[1] << q[2] << endl
      << q[0] << q[3] << q[4] << q[7] << endl
      << " " << q[5] << q[6] << endl <<endl;
  counter++;
}
void move(int* q, int i){
 if(i==8){
 print(q);
 return;
 }

 for(int j=0;j<8;j++){
 q[i]=j;
 if(ok(q,i)) 
 move(q,i+1); 
 }
};


int main()
{
 int q[8];
 move(q,0);
} 
