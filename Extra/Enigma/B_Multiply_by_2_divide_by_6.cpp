#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int n;
		cin>>n;
 
		int a=0,b=0;
 
		while(n%2 == 0){
			n/=2;
			a++;
		}
 
		while(n%3==0){
			n/=3;
			b++;
		}
 
		if(n!=1 || a>b) 
         cout<<-1<<endl;
		else 
         cout<< (b-a) + b <<endl;
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