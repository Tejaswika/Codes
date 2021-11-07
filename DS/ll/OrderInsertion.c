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
node *start = NULL;
node *temp, *ptr,*newNode;
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
void newNodeF()
{
	newNode = (node*)malloc(sizeof(node));
	printf("Enter the data: ");
    scanf("%d", &newNode->data);
	newNode->next = NULL;
}

void sortedInsert()
{
	if (start == NULL || (start)->data >= newNode->data)
	{
		newNode->next = start;
		start = newNode;
		return;
	}

	ptr = start;
	while (ptr->next != NULL && ptr->next->data < newNode->data)
		ptr = ptr->next;

	newNode->next = ptr->next;
	ptr->next = newNode;
}
void main()
{
  printf("Create the link list: \n");
  create();
  display();
  printf("\nCreate New Node: \n");
  newNodeF();
  sortedInsert();
  display();
}