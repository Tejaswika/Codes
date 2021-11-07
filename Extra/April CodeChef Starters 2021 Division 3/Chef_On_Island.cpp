#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <algorithm>

using namespace std;
void solve()
{
    float x,y,x1,y1,d;
    cin >>x>>y>>x1>>y1>>d;
    int m=min((x/x1),(y/y1));
    if (m>=d)
    {
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
  cin >> t;
  while (t--)
  {
    solve();
  }  
  return 0;
}