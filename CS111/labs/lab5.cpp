#include <iostream>
using namespace std;
int main () {

  // PART A - REPEAT HELLO 10 TIMES
  int count;
  count = 1;
  while (count<=10){
    cout << "Hello";
    count = count + 1;
  }

  //PART B - Print 1 Number per line up to 1000
  count = 1;
  while (count <= 1000){
    cout << count << endl;
      count = count + 1;
    }

  // PART C - Print numbers from 1-100, ten numbers per line
  int start = 1;
  int end = 100;
  while (start <= end) {
      cout << start << " ";
	if (start % 10 == 0)
	  cout << endl;
	start += 1;
  }

  //PART D - PRINT EVEN NUMBERS FROM 1 - 100 TO SCREEN, TEN NUMBERS PER LINE
  int s = 2;
  int e = 100;
  while (s <= e) {
    cout << s << " ";
    if (s % 20 == 0)
      cout << endl;
    s = s + 2;
  }

  //PART E - PRINT THE NUMBERS FROM 1-100, TEN NUMBERS PER LINE.
  //ALL EVEN NUMBERS MUST BE PRINTED OUT AND THE ODD WILL BE REPLACED BY *
  int st = 1;
  int en = 100;
  while (st <= en) {
    cout << st << " ";
    if (st % 10 == 0)
      cout <<endl;
    else (st % 2 == 1)
      cout <<"*";
    st = st + 1;
}

  return 0;
}

