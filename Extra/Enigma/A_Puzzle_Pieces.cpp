#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int n, m; cin >> n >> m;
 
		if (n > m)
			swap(n, m);
 
		if (n == 1 || (n == 2 && m == 2))
			cout << "YES\n";
 
		else
			cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }  
  return 0;
}