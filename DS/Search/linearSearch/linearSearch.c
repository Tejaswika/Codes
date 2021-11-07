#include<stdio.h>
main()
{
    int i,x,n,loc;
    printf("Enter the size: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);}
    printf("Enter element to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(A[i]==x){
            loc=i;}}

    if(loc<n)
        printf("Element found at location: %d",loc+1);
    else
        printf("Element not found");
}
