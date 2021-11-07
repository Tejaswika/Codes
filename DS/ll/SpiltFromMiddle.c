#include<stdio.h>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
#include <malloc.h>

typedef struct nodetype

{
    int data;
    struct nodetype *next;
} node;
node *start = NULL,*start1=NULL,*start2=NULL;
node *temp, *ptr,*newNode;
int count=0;
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
        count++;
    }
}
void display(node* head)
{
    ptr = head;
    printf("Created list: \n");
    while (ptr != NULL)
    {
        printf("-->%d", ptr->data);
        ptr = ptr->next;
    }
}

void splitMiddle()
{
    if (count < 2)
    {
        start1 = start;
        start2 = NULL;
        return;
    }
 
    ptr = start;
 
    int hopCount = (count - 1) / 2;
    for (int i = 0; i < hopCount; i++) {
        ptr = ptr->next;
    }
 
    // Now cut at ptr
    start1 = start;
    start2 = ptr->next;
    ptr->next = NULL;
    
}
int main()
{
  printf("Create the link list: \n");
  create();
  display(start);
  splitMiddle();
  printf("1st half: \n");
  display(start1);
  printf("2nd half: \n");
  display(start2);
  return 0;
}