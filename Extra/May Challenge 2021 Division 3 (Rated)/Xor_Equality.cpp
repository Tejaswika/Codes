#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    long int n;
    cin>>n;
    if (n==1)
    {
        std::cout << "1" << std::endl;
    }
    else
    {
        n--;
        long int a=2,ans=1;
        while (n>0)
        {
            if (n & 1)
            {
                ans=ans * a % 10000007;
                n >>=1;
            }
            
        }
        std::cout << ans << std::endl;
        
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