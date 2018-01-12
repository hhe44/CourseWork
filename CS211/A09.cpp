#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*Note2Self
i = current man
c = new man
q[i] = current woman
q[c] = new woman */

bool ok(int q[], int c){
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
};

void backtrack(int &c){
    c--;
    if(c==-1) {system("pause");exit(1);}
};

void print(int q[]){
    cout << "Man Woman" << endl;
    for(int i=0; i<3; i++){
        cout << " " << i << "    " << q[i] << endl;
    }
    cout << endl << endl;
};

int main(){
    int q[3]; q[0]=0;
    int c=0;
    bool from_backtrack=false;

    while(true){
        while(c<3){
        if(!from_backtrack)
            q[c]=-1;
            while(q[c]<3){
                q[c]++;
                if(q[c]==3){
                    backtrack(c);
                    continue;
                }
                if(ok(q,c)) break;
            }
            c++;
            from_backtrack=false;
        }
        print(q);
        backtrack(c);
        from_backtrack=true;
    }
    return 0;
}
