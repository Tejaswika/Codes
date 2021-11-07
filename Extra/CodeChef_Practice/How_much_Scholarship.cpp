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
    if (a<=50)
    {
        std::cout << "100" << std::endl;
    }
    else if (a>50 && a<=100)
    {
        std::cout << "50" << std::endl;
    }
    else
    {
        std::cout << "0" << std::endl;
    }
    
}

int main()
{
  int t=1;
  while (t--)
  {
    solve();
  }  
  return 0;
}