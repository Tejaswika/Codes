#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    int n,c=0;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
cin >> arr[i];
}
for(int i=0;i<n-1;i++){
if(arr[i]<arr[i+1]){
arr[i+1] = arr[i];
}
else{
c++;
}
}
cout << c+1 << endl;
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