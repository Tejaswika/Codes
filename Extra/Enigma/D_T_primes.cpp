#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
const int mod = 1e9 + 7;
int n;
int arr[N];
int y[N];
char l[N];
char r[N];
int dp[N] [2] [N];
int idx;
bool f[N];
map < string , int > mtp;

int check(int x) {
    do {
        if(x % 10 != 4 && x % 10 != 7) {
            return 0;
        }
        x /= 10;
    } while(x);
    return 1;
}

int check2() {
    int cnt = 0;
    for(int i = 1; i <= strlen(l + 1); ++i)
        cnt += (l[i] == '4') | (l[i] == '7');
    return f[cnt];
}


int add(int a , int b) {
    a += b;
    if(a >= mod) {
        a -= mod;
    }
    return a;
}

int counts(int pos , bool lo , int cnt) {

    if(dp [pos] [lo] [cnt] != -1)
        return dp [pos] [lo] [cnt];

    if(pos == n + 1)
        return f[cnt];

    int to = lo ? 9 : y[pos];
    int res = 0;

    for(int dig = 0; dig <= to; ++dig)
        res = add(res , counts(pos + 1 , lo | (dig < y[pos]) , cnt + ( (dig == 4) | (dig == 7) ) ) );

    return dp [pos] [lo] [cnt] = res;
}


int solve(int type) {
    if(type == 1) {
        if(mtp.find(l + 1) != mtp.end())
            return mtp[l + 1];
        n = (int) strlen(l + 1);
        for(int i = 1; i <= n; ++i)
            y[i] = (int) (l[i] - '0');

    } else {
        if(mtp.find(r + 1) != mtp.end())
            return mtp[r + 1];
        n = (int) strlen(r + 1);
        for(int i = 1; i <= n; ++i)
            y[i] = (int) (r[i] - '0');
    }
    memset(dp , -1 , sizeof dp);
    int rekt = counts(1 , 0 , 0);
    if(type == 1) {
        mtp[l + 1] = rekt;
    } else mtp[r + 1] = rekt;
    return rekt;
}

int main() {
    for(int i = 1; i <= 1000; ++i) {
        f[i] = check(i);
    }
    int tt;
    scanf("%d" , &tt);
    while(tt--) {
        scanf("%s %s" , l + 1 , r + 1);
        int ans = (solve(2) - solve(1) + mod ) % mod;
        if(check2()) {
            ans += 1;
            if(ans >= mod) {
                ans -= mod;
            }
        }
        printf("%d\n" , ans);
    }
    return 0;
}