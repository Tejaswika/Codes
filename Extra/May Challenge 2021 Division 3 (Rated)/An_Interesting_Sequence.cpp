#include <bits/stdc++.h>
using namespace std;
#define int 						long long
#define str 						string
#define f 							first
#define vec 						vector
#define sumofNnaturalNum(N)			N*(N+1)/2
#define p(x) 						push(x)
#define TIE 						cin.tie(NULL)
const int mod=  					1e9+7;
#define IOS 						ios_base::sync_with_stdio(false);
#define gcd(a,b) 					__gcd(a,b);
#define pi 							pair
#define s 							second
#define pb(a) 						push_back(a);
#define printVec(v) 				for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
#define endl 						"\n"
#define vecSum(v)					int sum=0;for(int i=0;i<v.size();i++){sum+=v[i];}cout<<sum<<endl;
#define printArr(v,size)			for(int i=0;i<size;i++){cout<<v[i]<<" ";}
void solve(){
	long  t;cin>>t;
	while(t--){
		long n;cin>>n;
		long end=(2*n)+1;
		long sum=0;
		for(long i=1;i<end;i++){
			long one=n+(i*i);
			long two=n+((i+1)*(i+1));
			sum+=gcd(one,two);
		}
		cout<<sum<<endl;
	}
}
int32_t main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}