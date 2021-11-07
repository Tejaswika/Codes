#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    string s;
        cin>>s;
        int count=0;
        int left[26]={0}, right[26]={0};
        int len=s.length();
        for(int i=0;i<len/2;i++)
        {
            int final = s[i]-'a';
            left[final]++;
        }
        for(int i=(len+1)/2;i<len;i++)
        {
            int final=s[i]-'a';
            right[final]++;
        }
        for(int i=0;i<26;i++)
        {
            if(left[i]!=right[i])
            count=1;
        }
        if(count==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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