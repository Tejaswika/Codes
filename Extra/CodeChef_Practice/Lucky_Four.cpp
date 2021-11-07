#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int num, a, count=0;
    cin>>num;
	   while(num > 0){
	       a=num%10;
	       num = num/10;
	       if( a==4 )
	        count++;
	   }
	   cout<<count<<endl;
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