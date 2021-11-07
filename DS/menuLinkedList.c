#include<stdio.h>
typedef struct nodetype{
int data;
struct nodetype *next;
}node;
node *start=NULL;
node *temp,*ptr;

void create(){
int ch;
printf("Enter 2 to continue");
scanf("%d",&ch);
while(ch != 1){
    temp =(node*)malloc(sizeof(node));
    printf("Enter the data \n");
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(start == NULL){
        start=temp;
        ptr=temp;

    }
    else{
        ptr=temp;
    }
}

}
main(){
create();
}


