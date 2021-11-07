#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef map<char,int> mapci;
typedef priority_queue<int> pr;
 
#define small 1e-9
#define big5 1000000005
#define big7 1000000007
#define big 100000
#define pi 3.1415926
 
#define inp(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define cum(arr,n,cumm) cumm[0]=arr[0];for(int i=1;i<n;i++)cumm[i]=cumm[i-1]+arr[i];
#define bsdk ios_base::sync_with_stdio(false);cin.tie(NULL);
#define disp(arr) for(auto i:arr)cout<<i<<" ";cout<<"\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define yess cout<<"Yes\n"
#define noo cout<<"No\n"
#define m1 cout<<"-1\n"
#define nl <<endl
#define hs cout<<"#"
 
#define fori(a, b, c) for (a = (b); (a) <= (c); ++(a))
#define ford(a, b, c) for (a = (b); (a) >= (c); --(a))
#define rep(i,n) fori(i,0,n-1)
#define repi(i,n) fori(i,1,n-1)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ub upper_bound
#define lb lower_bound
#define allv(v) v.begin(), v.end()
#define sorti(v) sort(allv(v))

void solve()
{
    ll n,r,i;
    cin>>n>>r;
    ll ans=0;
    if(n>r)
        ans=(r*(r+1))/2;
    else
        ans=(n*(n-1))/2 +1;
    //hs;
    cout<<ans nl;
}
int main()
{
    bsdk
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}