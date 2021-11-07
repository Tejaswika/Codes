#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    long int n,x,k;
    cin>>n>>x>>k;
    if (x%k==0)
    {
        std::cout << "YES" << std::endl;
    }
    else if ((n+1-x)%k==0)
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