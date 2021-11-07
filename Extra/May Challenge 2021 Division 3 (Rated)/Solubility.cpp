#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    long int X,A,B;
    cin >>X>>A>>B;
    long int ans=A+(100-X)*B;
    std::cout <<ans*10<< std::endl;
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