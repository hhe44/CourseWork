#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Henry He CS111 Section12E HW#9

//Part A
int findMax (int a[], int cap) {
  int max=a[0];
  for (int i=0;i<cap;i++){
    if (a[i]>max) max=a[i];
  }
  return max;
} 

//Part B
int findMin (int a[], int cap) {
  int min=a[0];
  for (int i=0;i<cap;i++){
    if (a[i]<min) min=a[i];
  }
  return min;
} 

//Part C
int findAverage (int a[], int cap) {
  int sum=0;
  for (int i=0;i<cap;i++){
    sum+=a[i];
  }
  return sum/cap;
}

//Part D
int findMinGap (int a[], int cap) {
  int min= abs(a[1]-a[0]);
  for (int i=1; i<cap; i++) {
    if (abs(a[i]-a[i-1])<min) {abs(a[i]-a[i-1])==min;}
  }
    return min;
}

//Part E
int findGapSum (int a[], int cap) {
  int sum=0;
  for (int i=1;i<cap;i++){
    sum=+abs(a[i]-a[i-1]);
  }
  return sum;
}


//*Success!* :)
int main () {
  int array[20]={};
  for (int i=0; i<20; i++){
    array[i]=rand()%41+60;
  }
  cout<<findMax(array, 20)<<endl;
  cout<<findMin(array, 20)<<endl;
  cout<<findAverage(array, 20)<<endl;
  cout<<findMinGap(array, 20)<<endl;
  cout<<findGapSum(array, 20)<<endl;
  return 0;
}
