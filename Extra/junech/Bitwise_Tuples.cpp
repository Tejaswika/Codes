#include <bits/stdc++.h>

#define ll long long


using namespace std;

ll getPower(ll a, ll b) {
 static ll mod = 1000000007;
 if (b == 0) return 1;
 if (b == 1) return a;

 if (b % 2 == 0) {
  ll ans = getPower(a, b / 2);
  return (ans * ans) % mod;
 }
 else {
  ll ans = getPower(a, ((b - 1) / 2));
  return ((a * ans) % mod * ans) % mod;
 }
}

int main() {
 
 int test;
 cin >> test;
 while (test--) {

  ll a, b, temp;
  cin >> a >> b;

  temp = getPower(2 , a) - 1;

  cout << getPower(temp, b) << endl;

 }

 return 0;
}