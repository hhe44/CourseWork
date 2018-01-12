#include <iostream>
using namespace std;
int main() {
  int x, y;
  cout << "Please enter two positive integers: ";
  cin >> x >> y;
  if (y <= 0) y = x;
  if (x <= 0) {
    cout << "Illegal" << endl;
    return 0;
}

  if (x <= 10)
    cout << y << x << endl;
  cout << x << endl;
return 0;
}
