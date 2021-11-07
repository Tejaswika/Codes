#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
   int d1,d2,v1,v2,p,sum=0,i;
   cin >>d1>>v1>>d2>>v2>>p;
   for ( i = 1; sum < p; i++)
   {
       if (i>=d1)
       {
           sum=sum+v1;
       }
       if (i>=d2)
       {
           sum=sum+v2;
       }
       
    }
   std::cout << i-1 << std::endl;
   

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