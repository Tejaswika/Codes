#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
     int sum = 0,i,c=0;

    string s;

    cin>>s;

    {

        c=0;

        while(s.length()>1)

        {

            sum=0;

            for(i=0; i<s.length(); i++)

            {

                sum=sum+(s[i]-'0');

            }

            s=to_string(sum);

            c++;

        }

        cout<<c<<endl;

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