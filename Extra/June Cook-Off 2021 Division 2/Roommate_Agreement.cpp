#include<bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define endl '\n'
#define F firs
#define S second
#define all(x) x.begin(), x.end()
#define allr(c) c.rbegin(),c.rend()
#define mem(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626

typedef pair<ll, ll>        pll;
typedef vector<ll>          vl;
typedef vector<pll>         vpll;
typedef vector<vl>          vvl;
typedef map<ll, ll>         ml;
typedef map<ll, bool>       mlb;


void solve() {
    int n,sum=0,count=0,count_0=0,i;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int,int> mp;
    for ( i = 0; i <n; i++)
    {
        sum +=arr[i];
        if (sum==0)
        {
            count_0++;
        }
        mp[sum]++;
        
    }
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        int x=itr->second;
        count += x*(x-1)/2;
    }
    std::cout << count + count_0 << endl;
    
}


int main() {
int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}