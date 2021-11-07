#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct nodetype

{
    int data;
    struct nodetype *next;
} node;
node *start = NULL;
node *temp, *ptr;
void create()
{
    int ch = 0;
    while (ch != 1)
    {
        temp = (node *)malloc(sizeof(node));
        printf("Enter the data: ");
        scanf("%d", &temp->data);
        temp->next = NULL;
        if (temp == NULL)
        {
            printf("Overflow");
        }
        if (start == NULL)
        {
            start = temp;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = ptr->next;
        }
        printf("Enter 1 to STOP: ");
        scanf("%d", &ch);
    }
}

void display()
{
    ptr = start;
    printf("Created list: \n");
    while (ptr != NULL)
    {
        printf("-->%d", ptr->data);
        ptr = ptr->next;
    }
}

void insertBeg()
{
    temp = (node *)malloc(sizeof(node));
    printf("ENTER DATA FOR NEW NODE: ");
    scanf("%d", &temp->data);
    temp->next = start;
    start = temp;
}
void insertEnd()
{
    temp = (node *)malloc(sizeof(node));
    printf("ENTER DATA FOR NEW NODE: ");
    scanf("%d", &temp->data);
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = NULL;
}
void insertPos()
{
    int key;
    printf("Enter the data of the node after which new node is to be added: ");
    scanf("%d", &key);
    temp = (node *)malloc(sizeof(node));
    printf("ENTER DATA FOR NEW NODE: ");
    scanf("%d", &temp->data);
    ptr = start;
    while (ptr->next != NULL && ptr->data != key)
    {
        ptr = ptr->next;
    }
    if (ptr->next == NULL)
    {
        printf("NO KEY FOUND");
    }
    else
    {
        temp->next = ptr->next;
        ptr->next = temp;
    }
}
void del()
{
    if (start == NULL)
    {
        printf("Underflow");
    }
    else if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        free(ptr);
    }
    else
    {
        ptr = start;
        start = start->next;
        free(ptr);
    }
}
void search(){
    int count=0;
    node *ptr=start;
    int ele;
    scanf("%d",&ele);
    while(ptr!=NULL && ptr->data==ele){
        count++;
        ptr=ptr->next;
    }
    if (count!=0)
    {
        printf("found at %d",count);
    }
    else{
        printf("not found");
    }
    
}
int main()
{

    int c;
    printf("ENTER:-\n1 FOR CREATE \n2 FOR INSERT AT BEGINNING \n3 FOR INSERT AT END \n4 FOR INSERT AT POSITION \n5 FOR DELETION \n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    {
        create();
        display();
        break;
    }
    case 2:
    {
        printf("Create a list \n");
        create();
        insertBeg();
        display();
        break;
    }
    case 3:
    {
        printf("Create a list \n");
        create();
        insertEnd();
        display();
        break;
    }
    case 4:
    {
        printf("Create a list \n");
        create();
        insertPos();
        display();
        break;
    }
    case 5:
    {
        printf("Create a list \n");
        create();
        del();
        display();
        break;
    }
    case 6:
    {
        printf("Create a list \n");
        create();
        search();
        display();
        break;
    }
    }
}
