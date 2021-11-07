#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <cmath>

using namespace std;
void solve()
{
    long int n,d;
    cin >> n >>d;
    long int arr[n];
    float risk=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i]>=80 || arr[i]<=9)
        {
          risk++;
        }
        
    }
     float nrisk=n-risk;
    int dpr=ceil(risk/d);
    int dnpr=ceil(nrisk/d);
    int ans= dpr + dnpr;
    std::cout << (ans) << std::endl;
    
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