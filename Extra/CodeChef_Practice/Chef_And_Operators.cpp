#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int a,b;
    cin >> a >> b;
    if (a > b)
    {
        /* code */
        cout << ">" << endl;
    }
    else if (a < b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
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