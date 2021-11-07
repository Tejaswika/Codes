#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int gcd(long int a, long int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
long int countPairs(long int G, long int L,long int x, long int y) 
{ 
    long int count = 0; 
    long int p = G*L; 
    for (long int a=1; a<=L; a++)
        if(a>=x&&p/a<=y)
         if (!(p%a) && gcd(a, p/a)==G) 
            count++; 
    return count; 
} 
int main() {
    long int t,x,y,G,L,r;
    scanf("%ld",&t);
    for(long int i=0;i<t;i++){
       scanf("%ld%ld%ld%ld",&x,&y,&G,&L);
       r=countPairs(G,L,x,y);
       if(r!=0){
           printf("YES\n%ld\n",r);
       }
       else{
           printf("NO\n");
       }
    }
    return 0;
}