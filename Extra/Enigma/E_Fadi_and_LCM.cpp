#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;
void solve()
{
    //write your code here//
      {
        int  n,a,f,i,b,lcm,gcd;
        cin>>n;
        for(i=sqrt(n); i>=1; i--)
        {
            if(n%i==0)
            {
                gcd=__gcd(n/i,i);
                lcm=(n/i)*i/gcd;
                if(lcm==n)
                {
                    cout<<i<<" "<<n/i<<endl;
                    f=1;
                    break;
                }
                if(f==1)
                break;
            }
        if(f==1)
                break;
        }
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