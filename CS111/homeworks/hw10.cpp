#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Henry He CS111 Section12E hw#10

//Part B
int findLargestSum(int a[][10], int r, int c) {
  int largestSum = 0;
  for (int row=0;row <r;row++) 
    {largestSum=largestSum + a[row][0];}
  for (int col=0;col<c;col++){
    int colValue=0;
    for (int row=0;row<r;row++)
      {colValue=colValue + a[row][col];}
    if (colValue>largestSum) largestSum = colValue;
    }
  return largestSum;
}

//Part A
