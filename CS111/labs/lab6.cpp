#include <iostream>
using namespace std;
int main () {

  //Part A;
  int n;
  cout << "Please input an integer";
  cin >> n;
  for (int r = 1; r<=n; r++){ //rows
    cout << endl;
    for (int c = 1; c<=2*n; c++){ //columns
      cout << "*";
    }
  }
  cout << endl;


  //Part B
  for(int r2 = 1; r2<=n; r2++){
    for (int c2=1;c2<=n;c2++ ){
      if (r2%2==1) cout << "X";
      else cout << "O";
    }  
    cout << endl;
}


  return 0;
}
