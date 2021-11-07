#include <stdio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front;
struct node *rear;
void insert(int ele)
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL)
  {
    printf("OVERFLOW \n");
    return;
  }
  else
  {
    temp->data = ele;
    if (front == NULL)
    {
      front = temp;
      rear = temp;
      front->next = NULL;
      rear->next = NULL;
    }
    else
    {
      rear->next = temp;
      rear = temp;
      rear->next = NULL;
    }
  }
}