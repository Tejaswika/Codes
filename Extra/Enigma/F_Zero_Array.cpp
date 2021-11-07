#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int n,count=0;
    cin >> n;
    int ar[n-1];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n && j !=i ; j++)
        {
            /* code */
            if (ar[i]==ar[j])
            {
                /* code */
                count++;
            }
            
        }
    }
    if (count==0)
    {
        /* code */
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "YES" << std::endl;
    }
    
    
    
    
}

int main()
{
  int t;
  t=1;
  while (t--)
  {
    solve();
  }  
  return 0;
}