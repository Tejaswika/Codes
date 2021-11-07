#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//

 int w,p;
 int countyes=0;
 cin>>w;
 for(int i=1;i<=w/2;i++)
	{
		p=w-i;
		if(i%2==0 && p%2==0)
			countyes++;
	}
if(countyes>0)
cout<<"YES";
else 
cout<<"NO";

    

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