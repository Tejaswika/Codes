#include<iostream>

#include <cmath>
using namespace std;
int main()
{ int t,j;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        a[i-1]=-i;
        else
        a[i-1]=i;
    }
    if(n==k){
        for(int i=1;i<=n;i++)
        cout<<i<<" ";
    }
    else{
        int sum=0;
        if(k<n/2){
            int type=n/2-k;
            for(int i=n;i>=1;i--){
                if(a[i-1]>0 && type>0){
                    a[i-1]*=-1;
                    type--;
                }
            }
        }
        else{
            int type=abs(n/2-k);
            for(int i=n;i>=1;i--){
                if(a[i-1]<0 && type>0){
                    a[i-1]*=-1;
                    type--;
                }
            }
        }
        for(int i=1;i<=n;i++)
        cout<<a[i-1]<<" ";
    }
    cout<<'\n';
        
}
  return 0;
}