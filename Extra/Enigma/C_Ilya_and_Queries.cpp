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
    string s;
    cin >> s;
    int m;
    cin >> m;
    int a[100001],l, r;
    int len = s.length();

    a[1] = 0;
    for (int i = 1; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    while (m--)
    {
        cin >> l >> r;
        std::cout << a[r] - a[l] << std::endl;
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