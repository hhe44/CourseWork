#include <cstdlib>
#include <iostream>
using namespace std;

int k, n; 


bool ok(int q[], int b, int size){
    int row = q[b]/size, column = q[b]%size, current_row, current_column;

    for(int i=0; i<b; i++){ 
        current_row = q[i]/size;
        current_column = q[i]%size;
        if(abs(row-current_row)==abs(column-current_column)) return false;
    }

    return true;
};

void backtrack(int &b, int count){
    b--;
    if(b==-1){
      cout << k << " bishops can be placed on an " << n << "x" << n << " array in " << count << " different ways."<<endl;
        exit(1);
    }
};

int main(){
    while(1){


        cout << "Enter n: ";
        cin >> n;
        cout << "Enter k: ";
        cin >> k;
        if(n<0) break;

 
        int* q = new int[k]; 
        int count = 0, b = 0, t;
        q[b] = 0;

        while(1){ 
            while(b<k){ 
                while(q[b]<n*n){ 
                    if(ok(q,b,n)) break;
                    else q[b]++;
                }

                if(q[b]==n*n){
                    backtrack(b, count);
                    q[b]++;
                    continue;
                }

                else{
                    t = q[b];
                    b++;
                    q[b] = t;
                }
            }
            count++;
            backtrack(b, count);
            q[b]++;
        }
    }
    return 0;
}



