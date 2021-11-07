#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(u,k,n) for(u=k;u<=n;u++)
#define pb push_back
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

#define out(container) for (auto it : container) cout << it << " "; cout << endl;
//============================================================================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;
//============================================================================
ll u, k, j, l, n, m;


void solve() {
    ll n,q;
    cin >>n >>q;
    ll a[n],b[q];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < q; i++)
    {
        ll c=0,m=0;
        for (ll j = 0; j < n; j++)
        {
            if(b[i]<a[j]){
                c++;
            }
            else if (b[i]==a[j])
            {
                m++;
            }
        }
        if (m>0)
    {
        std::cout << "0" << endl;
    }
    else if (c%2==0)
    {
        std::cout << "POSITIVE" << endl;
    }
    else
    {
        std::cout << "NEGATIVE" << endl;
    }
    }
    
    
    
    
}


int main() {
    solve();
    return 0;
}