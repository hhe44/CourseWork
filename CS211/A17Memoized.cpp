#include <iostream>
#include <climits>
using namespace std;

const int rows = 5;
const int cols = 6;
int weight[rows][cols]={
    {3,4,1,2,8,6},
    {6,1,8,2,7,4},
    {5,9,3,9,9,5},
    {8,4,1,3,2,6},
    {3,7,2,8,6,4}}; 
int directions[rows][cols]={0}; 

int cost(int i, int j){ 
    static int memo[rows][cols] = {0};

    if(j==0){
        memo[i][j] = weight[i][0];
        return weight[i][0];
    }
 
    if(memo[i][j]!=0) return memo[i][j];

    int left = cost(i, j-1);
    int up = cost((i-1+rows)%rows, j-1); 
    int down = cost((i+1)%rows, j-1);

    int min = left;
    directions[i][j] = 0;
    if(up < min){
        min = up;
        directions[i][j] = -1;
    }
    if(down < min){
        min = down;
        directions[i][j] = 1;
    }
    memo[i][j] = weight[i][j] + min;

    return memo[i][j];
}

int main(){
    int ex[rows], seq[cols], min_index;
    for(int i=0; i<rows; i++)
        ex[i] = cost(i, cols-1);
    int min = INT_MAX;
    for(int i=0; i<rows; i++){
        if(ex[i]<min){
            min = ex[i];
            min_index = i;
        }
    }
    int c = cols;
    seq[0] = min_index;
    for(int col=1; col<=cols-1; col++){
        seq[col] = seq[col-1] + directions[seq[col-1]][--c];
    }

    for(int col=0; col<cols; col++) seq[col]++;
    for(int j=0; j<cols; j++) cout << seq[j] << " ";

    cout << endl << "The shortest path has a length of " << min << endl;
    return 0;
}
