#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
void solve()
{
  int num1, num2;
  cin >> num1 >> num2;
  if (num1 > num2)
  {
    cout << num1 - num2 << endl;
  }
  else
  {
    cout << num1 + num2 << endl;
  }
}

int main()
{
  solve();

  return 0;
}