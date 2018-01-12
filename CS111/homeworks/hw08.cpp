#include <iostream>
using namespace std;

//HENRY HE CS111 SECTION12E


//PART A
int bigDown(int x) {
  if (x<5) return x; 
//Base case appears to be incomplete...
  if ((x>5)&&(x<10)) return x-1; 
//Base case is complete, but is it too complicated?
  if (x%10>=5) return bigDown(x-1);
//the condition above needs some tweaking,not sure how to fix it
  return x%10 + 10*bigDown(x/10);
}


//PART B
int evens(int x){
  if ((x<10)&&(x%2==0)) return x; //base case
  if (x%2==1) return evens(x/10); //exclude odd via ten-division
  return x%10 + 10*evens(x/10);   //How does this work?
}


//PART C
int useRecursion(int x) {
  if (x<10) return x; //base case
  if (x>99) return useRecursion(x/10); //isolate first two digit
  return x%10 + x/10; //e.g int x=99, (99/10) + (99%10) = 18
}


//TESTS
int main () {
  cout<<bigDown(4)<<endl; //Base Case (Part 1) Test: Success
  cout<<bigDown(7)<<endl; //Base Case (Part 2)Test:Success 
  cout<<bigDown(2567891)<<endl; //Test: Failed (prints 2444441)
  cout<<evens(8)<<endl;  //Base Case Test: Success 
  cout<<evens(18)<<endl; //Exclusion Test: Success
  cout<<evens(1998225)<<endl; //Return Test: Success
  cout<<useRecursion(9)<<endl; //Base Case Test: Success
  cout<<useRecursion(100)<<endl; //Exclusion Test: Success
  cout<<useRecursion(7388)<<endl; //Return Test: Success
}
