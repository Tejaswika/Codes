#include<stdio.h>
#include<iostream>
#include<math.h>
#include<strings.h>
#include<stdlib.h>

using namespace std;
void solve()
{
    //write your code here//
    int N;
    cin >> N;
    string S;
    cin >> S;
    int x=0,y=0;
    for (int i = 1; i < N ; i++)
		{
			if ((S[i] == 'R' && S[i - 1] == 'U') ||
                (S[i] == 'U' && S[i - 1] == 'R') ||
                (S[i] == 'U' && S[i - 1] == 'L') ||
                (S[i] == 'L' && S[i - 1] == 'U') ||
                (S[i] == 'R' && S[i - 1] == 'D') ||
                (S[i] == 'D' && S[i - 1] == 'R') ||
                (S[i] == 'L' && S[i - 1] == 'D') ||
                (S[i] == 'D' && S[i - 1] == 'L'))
			{
				switch (S[i])
				{
				case 'L': x -= 1; break;
				case 'R': x += 1; break;
				case 'U': y += 1; break;
				case 'D': y -= 1; break;
				}
			}
		}
		switch (S[0])
		{
		case 'L': x -= 1; break;
		case 'R': x += 1; break;
		case 'U': y += 1; break;
		case 'D': y -= 1; break;
		}
		cout << x << " " << y << endl;
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