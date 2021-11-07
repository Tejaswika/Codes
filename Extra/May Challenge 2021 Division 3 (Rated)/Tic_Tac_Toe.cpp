#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    char a[3][3];
    int x=0,o=0,u=0,winX=0,winO=0;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
           cin>>a[i][j];
           if (a[i][j]=='X')
           {
               x++;
           }
           else if (a[i][j]=='O')
           {
               o++;
           }
           else if(a[i][j]=='_')
           {
               u++;
           }
       }
       
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0]==a[i][1] && a[i][1]==a[i][2])
        {
           if (a[i][0]=='X')
           {
              winX++;
           }
           else if (a[i][0]=='O')
           {
               winO++;
           }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[0][i]==a[1][i] && a[1][i]==a[2][i])
        {
          if (a[0][i]=='X')
           {
              winX++;
           }
           else if (a[0][i]=='O')
           {
               winO++;
           }  
        }
        
    }
    if (a[0][0]==a[1][1] && a[2][2]==a[1][1])
    {
        if (a[0][0]=='X')
           {
              winX++;
           }
           else if (a[0][0]=='O')
           {
               winO++;
           }
    }
    if (a[0][2]==a[1][1] && a[2][0]==a[1][1])
    {
        if (a[0][2]=='X')
           {
              winX++;
           }
           else if (a[0][2]=='O')
           {
               winO++;
           }
    }
    
    if (o>x)
    {
        std::cout << 3 << std::endl;
    }
    else if (x-o>1)
    {
        std::cout << 3 << std::endl;
    }
    else if ((x>o) && winX==1 && winO==0)
    {
        std::cout << 1 << std::endl;
    }
    else if ((x==o) && winO==1 && winX==0)
    {
        std::cout << 1 << std::endl;
    }
    else if (u==0 && (winX+winO==0))
    {
        std::cout << 1 << std::endl;
    }
    else if (u==0 && winX==2)
    {
        std::cout << 1 << std::endl;
    }
    else if (u>0 && (winX+winO==0))
    {
        std::cout << 2 << std::endl;
    }
    else
    {
        std::cout << 3 << std::endl;
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