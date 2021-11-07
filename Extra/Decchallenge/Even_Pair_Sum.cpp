#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <bits/stdc++.h> 

using namespace std;
long int countOdd(long int L, long int R){  
  
    long int N = (R - L) / 2; 
  
    // if either R or L is odd  
    if (R % 2 != 0 || L % 2 != 0)  
        N += 1; 
  
    return N; 
} 
void solve()
{
   long int a,b,count;
   cin >> a >> b;
   long int odds1 = countOdd(1, a);  
   long int evens1 = (a - 1 + 1) - odds1;
   long int odds2 = countOdd(1, b);  
   long int evens2 = (b - 1 + 1) - odds2;
   count=(evens1*evens2)+(odds1*odds2);
   std::cout << count << std::endl; 
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