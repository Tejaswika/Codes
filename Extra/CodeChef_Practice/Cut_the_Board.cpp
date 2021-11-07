#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
void solve()
{
  int m, n;
  cin >> n >> m;
  int c = (n - 1) * (m - 1);
  cout << c << endl;
}

int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}