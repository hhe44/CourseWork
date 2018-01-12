#include <iostream>
using namespace std;
int main(){

  //HENRY HE CS111 SECTION12E
    
    //PART A
    int n, f = 1;
    cout << "Please enter integer n: ";
    cin >> n;
    if ((n<0)|(n>10)){
        cout << "INVALID INPUT, PROGRAM IS SHUTTING DOWN.";
        return 0;
    }
    else {
        for (int x=1;x<=n;x++)
            {f = f * x;}
        cout<<n<<"! = "<< f <<endl;
     }
     
     //PART B
    cout << "Multiples of "<<n<<" less than 100:"<<endl;
    for (int m=1; m<=100/n; m++){
      cout<<m*n<< " ";
      /* I don't see any problem with the line of code below
       but for some reason, the program won't run the code.*/
      if (n=n*n) cout << endl;
    }

return 0;
}
