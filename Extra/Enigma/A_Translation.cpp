#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <bits/stdc++.h>

using namespace std;
void solve()
{
    //write your code here//
    string a,b;
    cin >> a >> b;
    int n = a.length();
    for (int i = 0; i < n / 2; i++)
      swap(a[i], a[n - i - 1]);
    if (a==b)
    {
        /* code */
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    

}

int main()
{
  int t;
  t=1;
  while (t--)
  {
    solve();
  }  
  return 0;
}