#include<stdio.h>
main(){
int n,i,ele,loc;
printf("Enter the size: ");
scanf("%d",&n);
int A[n];
printf("Enter the array: ");
for (i=0;i<n;i++){
  scanf("%d",&A[i]);}
printf("Enter the element: ");
scanf("%d",&ele);
printf("Enter the location: ");
scanf("%d",&loc);
insertAtLoc(n,A,loc,ele);}

void insertAtLoc(int n,int A[],int loc,int ele){
 int i;
 i=n;
 while (i>=loc-1){
  A[i+1]=A[i];
  i--;
}
 A[loc-1]=ele;
 n=n+1;
 for (i=0;i<n;i++){
  printf("%d",A[i]);}
}
