#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;


int main()
{
  int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n%2==0)     
		{
			cout<<n+2*k<<endl;
			continue;
		}
		int s;
		for(int i=3;i<=n;i++)  
		if(n%i==0) 
		{
		    s=i;
		    break;
		} 
		cout<<n+s+(k-1)*2<<endl;
	}
	return 0;
}