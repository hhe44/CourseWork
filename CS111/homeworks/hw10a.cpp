#include <iostream>
#include <cstdlib>
using namespace std;

//HENRY HE CS111 SECTION12E HW#10

//PART B
int findLargestSum(int a[][10], int row, int col) {
  int largestSum = 0;
  for (int r=0; r<row; r++){
    largestSum=largestSum + a[r][0];
  }
  for (int c=0; c<col; c++){
    int cValue=0;
    for (int r=0; r<row; r++){
      cValue+=a[r][c];
    }
    if (cValue>largestSum) largestSum = cValue;
  }
  return largestSum;
}

//PART C
int findSmallestValue (int a[][10], int row, int col) {
  int smallestValue= a[0][0];
  for (int r=0; r<row; r++){
    for (int c=0; c<col; c++){
      if (a[r][c] < smallestValue)
	smallestValue = a[r][c];
    }
  }
  return smallestValue;
}


//PART D
void subtractAverage (int a[][10], int row, int col){

  //Step 1 - Find avg
  int sum=0;
    for (int r=0; r<row; r++){
      for (int c=0; c<col; c++){
      sum+=a[r][c];
    }
  }
  int avg = sum / (row*col);

  //Step 2 - Subtract avg from each element
  for (int r=0; r<row; r++){
    for (int c=0; c<col; c++){
      cout<< a[r][c] - avg << "  ";
    }
    cout<<endl;
  }
}


//PART A
int main () {
  srand(time(0));
  int a[10][10]={};
  for (int r=0; r<10; r++){
    for (int c=0; c<10; c++){
      a[r][c]=rand()%900+100;
    }
  }
  cout<<findLargestSum(a,10,10)<<endl;
  cout<<findSmallestValue(a,10,10)<<endl;
  subtractAverage(a,10,10);
  return 0;
}

/*Notes: 
#1: LargestSum is within reasonable range (5000 to 10000)
#2: SmallestValue is usually under 500
#3: For Testing purposes: remove avg varible in f(subtractAverage) 
    and srand(time(0)) in f(main)to view the original values.
    It is also ideal to set the array size to 3 in f(main);
#4: Flip rows and columns in f(SmallestValue) for summation of rows.
    Otherwise, leave as it is.
Everything appears to be correct.
*/
