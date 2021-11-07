#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int a;
    cin >> a;
    if (a==2019 || a==2010 || a==2015 || a==2016 || a==2017)
    {
        std::cout << "HOSTED" << std::endl;
    }
    else
    {
        std::cout << "NOT HOSTED" << std::endl;
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