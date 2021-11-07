#include<stdio.h>
main(){
int n,i,loc;
printf("Enter the size: ");
scanf("%d",&n);
int A[n];
printf("Enter the array: ");
for (i=0;i<n;i++){
  scanf("%d",&A[i]);}
printf("Enter the location: ");
scanf("%d",&loc);
deletionAtLoc(n,A,loc);
}

void deletionAtLoc(int n,int A[],int loc){
 int i;
 i=loc-1;
 while(i<n){
    A[i]=A[i+1];
    i++;
}
 n=n-1;
 for (i=0;i<n;i++){
    printf("%d",A[i]);
}
}
