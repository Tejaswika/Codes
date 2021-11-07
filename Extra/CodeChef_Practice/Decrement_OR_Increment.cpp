
#include <math.h>
#include <iostream>
using namespace std;
void solve()
{
  int num;
  cin >> num;
  if (num % 4 == 0)
  {
    cout << num + 1 << endl;
  }
  else
  {
    cout << num - 1 << endl;
  }
}

int main()
{
  solve();

  return 0;
}