#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int numDigit (int x) {
  if (x<10) return 1;
  return numDigit (x/10)+1;
}

int fib(int n){
  if (n<=1) return n;
  return fib(n-1)+fib(n-2);
}

int factorial (int n){
  if (n<=1) return 1;
  return n*factorial(n-1);
}

