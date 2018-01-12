// Rat class i.e. a class for rational numbers
#include <iostream>
using namespace std;

class Rat{
private:
 int n;
 int d;
public:
 // constructors

 // default constructor
 Rat(){
 n=0;
 d=1;
 }

 // 2 parameter constructor
 Rat(int i, int j){
 n=i;
 d=j;
 }
 
 // conversion constructor
 Rat(int i){
 n=i;
 d=1;
 }

 //accessor functions (usually called get() and set(...) )
 int getN(){return n;}
 int getD(){return d;}
 void setN(int i){ n=i;}
 void setD(int i){ d=i;}

 //arithmetic operators



 Rat operator+(Rat r){
 Rat t;
 t.n=n*r.d+d*r.n;
 t.d=d*r.d;
 return t;
 }

 Rat operator-(Rat r){
 Rat t;
 t.n=n*r.d-d*r.n;
 t.d=d*r.d;
 return t;
 }
 
 Rat operator*(Rat r){
 Rat t;
 t.n=n*r.n;
 t.d=d*r.d;
 return t;
 }

Rat operator/(Rat r){
 Rat t;
 t.n= n*r.d;
 t.d= d*r.n;
 return t;
 }

 // 2 overloaded i/o operators
 friend ostream& operator<<(ostream& os, Rat r);
 friend istream& operator>>(istream& is, Rat& r);
}; //end Rat

// operator<<() is NOT a member function but since it was declared a friend of Rat
// it has access to its private parts.
ostream& operator<<(ostream& os, Rat r){
  int min, f;
  if (r.n < r.d) min=r.n;
  else min = r.d;
  for (int i=2; i<=min; i++){
	if ( r.n%i==0 && r.d%i==0 )
	f=i;
  }
  if (r.n/f!=0) r.n=r.n/f;
  if (r.n/f!=0) r.d=r.d/f;
 
 
 if (r.n>r.d) os<< r.n / r.d <<" "<<r.n % r.d<<" / "<<r.d<<endl;
 else if (r.n=r.d) os<< r.n / r.d <<endl;
 else os<<r.n<<" / "<<r.d<<endl;
 return os;
 }
 
 //So it turns out that it's much easier to manipulate the output instead of writing 2 functions.
 
 /*
Rat lowestTerm(Rat x) {
 	int min, f;
	if (x.n < x.d) min=x.n;
	else min = x.d;
	for (int i=2; i<=min; i++){
		if ( x.n%i==0 && x.d%i==0 )
		f=i;
	}
	x.n=x.n/f;
	x.d=x.d/f;
	return x;
}
 */
 
// operator>>() is NOT a member function but since it was declared a friend of Rat
// it has access to its provate parts.
istream& operator>>(istream& is, Rat& r){
 is>>r.n>>r.d;
 return is;
}


int main(){
 Rat x(7,6), y(9,5);
 cout<<x+y<<endl;
 cout<<y-x<<endl;
 cout<<x*y<<endl;
 cout<<x/y<<endl;
}
