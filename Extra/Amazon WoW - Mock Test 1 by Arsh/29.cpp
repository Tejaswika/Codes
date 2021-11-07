#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n],b[n];
    int sumap=0 ,sumbp=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma=suma+a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sumb=sumb+b[i];
    }
    int sumTotal=(suma*suma)+(sumb*sumb);
    std::cout << sumTotal << std::endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }  
  return 0;
}