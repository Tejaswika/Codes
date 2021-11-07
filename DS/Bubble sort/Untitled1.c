#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *start;

int main()
{
    int choice;
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                printf ("\n\t Wrong Choice");
            }

        }
    }
    while(choice!=4);
    return 0;
}
void push ()
{
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\n\tSTACK is Overflow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&val);
        if(start==NULL)
        {
            ptr->data = val;
            ptr -> next = NULL;
            start=ptr;
        }
        else
        {
            ptr->data = val;
            ptr->next = start;
            start=ptr;

        }
        printf("%d is pushed",ptr->data);

    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (start == NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = start->data;
        ptr = start;
        start = start->next;
        printf("%d is popped",ptr->data);
        free(ptr);

    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr=start;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: \n");
        while(ptr!=NULL)
        {
            printf("-> %d",ptr->data);
            ptr = ptr->next;
        }
    }
}
