#include <stdio.h>
#include <math.h>

double f(int);

int main(void)
{
        int n;


                scanf("%d",&n); //Read the input
                printf("%ld", f(n));

}
double f(int n)
{
        if(n == 1)
                return 1;
        else
                return n*f(n-1);
}
