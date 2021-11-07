#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(u,k,n) for(u=k;u<=n;u++)
#define pb push_back
#define mp make_pair
#define ll long long
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

#define out(container) for (auto it : container) cout << it << " "; cout << endl;
//============================================================================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;
//============================================================================
ll u, k, j, l, n, m;


void solve() {
    ll n,a,b,count=0,p=0;
    cin >> n >> a >> b;
    for (ll i = 1; p<=n; i++)
    {
        p= 1 + ((i-1)*b);
        if (p==n)
        {
            count=1;
            break;
        }
        
    }
    
    if (n==1 || n%a==0 ||count==1 )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    
    
}


int main() {
ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}