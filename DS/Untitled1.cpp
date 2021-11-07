#include <iostream>
#include <cmath>
using namespace std;

int acc();

int main()
{
    int t;
    cin >> t;
    while (t--){
        acc();
    }

    return 0;
}

int acc()
{
    int n,i = 3, count, c;

    scanf("%d", &n);

    if(n >= 1)
    {
        printf("2 ");
    }

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
}





