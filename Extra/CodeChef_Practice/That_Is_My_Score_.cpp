#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
     int N,arr[8]={0},score=0;
	  cin>>N;
	  for(int i=0;i<N;i++)
	     { int p,s;
	       cin>>p>>s;
	       if(p>8)
	         continue;
	       else if (s>arr[p-1])
	           { score+=s-arr[p-1];
	             arr[p-1]=s; 
	           }
        
}
std::cout << score << std::endl;
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