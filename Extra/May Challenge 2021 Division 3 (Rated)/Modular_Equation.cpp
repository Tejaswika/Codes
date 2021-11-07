#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll m,n,count=0;
    cin >>n>>m;
    vector<long long> mod(n+1,1);
    for (int  a = 2; a <=n ; a++)
    {
            ll x=m%a;
            count +=mod[x];
            for (ll b = x; b <= n; b+=a)
            {
                mod[b]++;
            }
        
    }
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