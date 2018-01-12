#include <climits>
#include <iostream>
using namespace std;

const int rows = 5;
const int cols = 6;
int weight[rows][cols]={
    {3,4,1,2,8,6},
    {6,1,8,2,7,4},
    {5,9,3,9,9,5},
    {8,4,1,3,2,6},
    {3,7,2,8,6,4}}; 


int costs[rows][cols] ={0};
int directions[rows][cols] = {0}; 
int min_index; 

int minimum(int arr[]){
    int min = INT_MAX;
    for(int iter=0; iter<rows; iter++){
        if(costs[iter][cols-1]<min) min = costs[iter][cols-1];
    }

    return min;
}

int cost(){
    for(int col=0; col<cols; col++){
        for(int row=0; row<rows; row++){

            if(col==0) costs[row][0] = weight[row][0];
            else{

                int up = costs[(row-1+rows)%rows][col-1];
                int left = costs[row][col-1];
                int down = costs[(row+1)%rows][col-1];

                int min = left;
                directions[row][col] = 0;
                if(up < min){
                    min = up;
                    directions[row][col] = -1;
                }
                if(down < min){
                    min = down;
                    directions[row][col] = 1;
                }

                costs[row][col] = weight[row][col] + min;
            }
        }
    }

    int min = INT_MAX;
    for(int iter=0; iter<rows; iter++){
        if(costs[iter][cols-1]<min){
            min = costs[iter][cols-1];
            min_index = iter;
        }
    }

    return min;
}

int main(){
    int seq[cols];
    cout << "The shortest path has a length of " << cost() << endl;
    seq[cols-1] = min_index;
    for(int col=cols-2; col>=0; col--) seq[col] = seq[col+1] + directions[seq[col+1]][col+1];
    for(int col=0; col<cols; col++) seq[col]++;
    for(int j=0; j<cols; j++) cout << seq[j] << " ";
    return 0;
}
