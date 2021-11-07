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
    cin >> n>> m;
    vl a(n),b(m);
    int l[n];
	int r[n];
	int temposl=-1;
	int temposr=-1;
	int posl[n];
	int posr[n];
	int templ=INT_MAX;
	int tempr = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=0){
	            if(a[i]<=templ)
	            {
	                templ=a[i];
	                l[i]=templ;
	                temposl =i;
	                posl[i]=temposl;
	            }
	             else{
	            l[i]=templ;
	            posl[i]=temposl;
	        }
	        }
	        else{
	            l[i]=templ;
	            posl[i]=temposl;
	        }
	    }
	    for(int i=n-1;i>=0;i--){
	        if(a[i]!=0){
	            if(a[i]>=tempr)
	            {
	                tempr=a[i];
	                r[i]=tempr;
	                temposr=i;
	                posr[i]=temposr;
	            }
	              else{
	            r[i]=tempr;
	            posr[i]=temposr;
	        }
	        }
	        else{
	            r[i]=tempr;
	            posr[i]=temposr;
	        }
	    }
	    for(int i=0;i<m;i++)
	    {
	        int q;
	        scanf("%d",&q);
	        q=q-1;
	        if(a[q]!=0)
	       { printf("%d ",0);}
	       else{
	        int left = l[q];
	        int right = r[q];
	        if(left==1&&right==2)
	        {
	           printf("%d ",min(q-posl[q],posr[q]-q));
	        }
	        else if(left==1&&right!=2){
	    printf("%d ",(q-posl[q]));
	        }
	        else if(right==2&&left!=1){
	           printf("%d ",(posr[q]-q));
	        }
	        else
	     
	        printf("%d ",-1);
	       }
	    }
	   printf("\n");
    
}


int main() {
ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}