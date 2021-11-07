#include <bits/stdc++.h>
using namespace std;
void printSeries(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int num = i * (i + 1) * (i + 2) / 6;
        cout << num << " ";
    }
}
int printSeriesSum(int n)
{
  int sum=0;
  for (int i = 1; i <= n; i++)
    {
        int num = i * (i + 1) * (i + 2) / 6;
        sum=sum+num;

    }
 return sum;
}
int nTH_term(int n)
{
  int num = n * (n + 1) * (n + 2) / 6;
  return num;
}

int sumOftwo(int l,int r){
   int s=nTH_term(l)+nTH_term(r);
   return s;

}



int main()
{
    int n = 10;
    printSeries(n);
    cout<< printSeriesSum(n) << " ";
    cout<< nTH_term(n)<< " ";
    cout<< sumOftwo(2,3);
}
