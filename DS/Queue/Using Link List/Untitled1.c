#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("OVERFLOW \n");
        return;
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d",&item);
        ptr -> data = item;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}
void delete ()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("UNDERFLOW \n");
        return;
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL)
    {
        printf("Queue is empty \n");
    }
    else
    {   printf("Queue is: ");
        while(ptr != NULL)
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
    }
}

void main(){
 int choice;
    while(1)
    {
        printf("Enter your choice: \n1 for INSERT \n2 for DELETE \n3 for DISPLAY \n4 for EXIT: \n");
        scanf("%d",& choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("Wrong choice");
        }
    }
}

