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
  ll s1,s2,s3,s4;
  vl arr(4);
  fo(u,0,3)cin >> arr[u];
  ll f1=max(arr[0],arr[1]);
  ll f2=max(arr[2],arr[3]);
  sort(all(arr));
  if((f1== arr[2] || f1==arr[3]) && (f2== arr[2] || f2==arr[3])){cout << "YES" << endl;}
  else {cout << "NO" << endl;}
}


int main() {

    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}