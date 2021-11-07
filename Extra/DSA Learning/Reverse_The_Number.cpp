#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    int n,n1=0;
    cin >> n;
    while (n >0)
    {
        int c=n%10;
         n1 =  n1*10 + c;
            n = n/10;
    }
    std::cout << n1 << endl;
    
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