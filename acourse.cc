
#include <iostream>
#include <conio.h>
#include "acoursemath.h"
using namespace std;
using namespace acourse;

int main ()
{
  int i,a,b,c,rnd_sum;
  a=2;
  b=3;
  c=6;
  acourse_math am;
  cout << "Please enter an integer value: ";
  cin >> i;
  cout << "The value you entered is " << i;

  rnd_sum = am.random_add(i,a);
  cout << " and its random sum is " << rnd_sum << ".\n";
  getch();
  return 0;
}
