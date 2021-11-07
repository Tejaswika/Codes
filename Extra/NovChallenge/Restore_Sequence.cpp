#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    int n,flag;
    cin >> n;
    int a[n+1],b[n+1];
    for (int i = 1; i < n+1; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i <=n; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1){
          for (int k= 1; k < n+1; k++)
          {
            b[k]=i;
          }
          
        }
    }
    for (int i = 1; i < n+1; i++)
    {
      std::cout << b[i] << std::endl;
    }
      
    
    

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