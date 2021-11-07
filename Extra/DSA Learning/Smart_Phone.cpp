#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <bits/stdc++.h> 

using namespace std;
void solve()
{
   long int n;
   cin >> n;
   long a[n],b[n];
   for (long int i = 0; i < n; i++)
   {
     cin >> a[i];
   }
   sort(a, a+n);
   long int r=n;
   for (long int i = 0; i < n; i++)
   {
     b[i]=r*a[i];
     r=r-1;
   }
   cout << *max_element(b, b + n);
   
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