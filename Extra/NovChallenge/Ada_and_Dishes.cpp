#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <algorithm>
using namespace std;
void solve()
{
    int n,time1=0,time2=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for (int i = 0; i < n; i++)
    {
      if (time1<=time2)
      {
          time1=time1 + a[i];
      }
      else
      {
          time2=time2 + a[i];
      }
    }
    if(time1>=time2){
        std::cout << time1 << std::endl;
    }
    else
    {
        std::cout << time2 << std::endl;
    }
    
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