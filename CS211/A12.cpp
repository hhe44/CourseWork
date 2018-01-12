#include <iostream>
#include <cstdlib>
using namespace std;

bool check(int q[], int c){
    for(int i=0; i<c; i++)
        if(q[c]==q[i] || (c-i)==abs(q[c]-q[i])) return false;
    return true;
};

bool backtrack(int &c){
    c--;
    if(c==-1) return false;
    return true;
};

int calc(int n){
    int *q=new int[n];
    //int array q has a capacity of n;
    for(int i=0; i<n; i++) q[i]=0;
    int c=0, results=0;
    bool from_backtrack=false;

    while(1){
        while(c<n){
        if(!from_backtrack)
            q[c]=-1;
            while(q[c]<n){
                q[c]++;
                if(q[c]==n){
                    if(backtrack(c)) continue;
                    else return results;
                }
                if(check(q,c)) break;
            }
            c++;
            from_backtrack=false;
        }
        results++;
        if(!backtrack(c)) return results;
        from_backtrack=true;
    }
    delete[]q;
    return results;
};

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << "There are " << calc(i) << " solutions to the " << i << " queens problem." << endl;
    }
    system("pause");
    return 0;
}
