// recursive stable marriage
#include <iostream>
#include <cmath>
using namespace std;

/*Note2Self
i = current man
c = new man
q[i] = current woman
q[c] = new woman */

bool ok(int * q, int c){
    int mp[3][3]={{0, 2, 1},
                  {0, 2, 1},
                  {1, 2, 0}};
    int wp[3][3]={{2, 1, 0},
                  {0, 1, 2},
                  {2, 0, 1}};

    for(int i=0; i<c; i++)
        if(q[c]==q[i]) return false;
    
    for(int i=0; i<c; i++){
        if(mp[i][q[i]]>mp[i][q[c]]&&wp[q[c]][i]<wp[q[c]][c]) return false;
        if(mp[c][q[i]]<mp[c][q[c]]&&wp[q[i]][c]<wp[q[i]][i]) return false;
    }
    return true;
}

void print(int * q){ 
    cout << "Man Woman" << endl;
    for(int i=0; i<3; i++){
        cout << " " << i << "    " << q[i] << endl;
    }
    cout << endl << endl;
}

void move(int* q, int i){
 if(i==3){
 print(q);
 return;
 }

 for(int j=0;j<3;j++){
 q[i]=j;
 if(ok(q,i)) 
 move(q,i+1); 
 }
};


int main(){
 int q[3];
 move(q,0);
} 
