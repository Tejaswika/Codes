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
ll D,d,P,Q;
cin >>D >>d >>P >>Q;
n=D/d;
l=0;
if (n%2==0)
{
    l += d*((n/2)*(2*P+(n-1)*Q));
}
else
{
    l +=d*(n*(P+((n-1)/2)*Q));
}
l +=(D%d)*(P+(n)*Q);
std::cout << l << endl;
}


int main() {
ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}