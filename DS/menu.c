#include<stdio.h>
main(){
int n,i;
printf("Enter the size: ");
scanf("%d",&n);
int A[n];
printf("Enter the array: ");
for (i=0;i<n;i++){
  scanf("%d",&A[i]);}
char choice;
printf("Enter an operation (I for Insertion , D for deletion): ");
scanf(" %c", &choice);
switch(choice){
case 'I':
    {int ele,loc;
    printf("Enter the element");
    scanf("%d",&ele);
    printf("Enter the loc");
    scanf("%d",&loc);
    insertAtLoc(n,A,loc,ele);
    break;}
case 'D':
    {int loc;
    printf("Enter the loc");
    scanf("%d",&loc);
    deletionAtLoc(n,A,loc);
    break;}
}
}

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
