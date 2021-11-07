
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void insert(int ele)
{
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = ele;
  temp->next = NULL;
  if ((rear == NULL) && (front == NULL))
  {
    front = rear = temp;
    rear->next = front;
  }
  else
  {
    rear->next = temp;
    rear = temp;
    temp->next = front;
  }
}
void del()
{
  struct node *t;
  t = front;
  if ((front == NULL) && (rear == NULL))
    printf("Queue is Empty \n");
  else if (front == rear)
  {
    printf("Deleted Element: %d\n", t->data);
    front = rear = NULL;
    free(t);
  }
  else
  {
    printf("Deleted Element: %d\n", t->data);
    front = front->next;
    rear->next = front;
    free(t);
  }
}
void display()
{
  struct node *t;
  t = front;
  if ((front == NULL) && (rear == NULL))
    printf("Queue is Empty \n");
  else
  {
    printf("Queue Elements are: ");
    do
    {
      printf("%d ", t->data);
      t = t->next;
    } while (t != front);
  }
}
int main()
{
  int choice, item;
  do
  {
    printf("\n1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Quit\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Input the element for insertion in queue : ");
      scanf("%d", &item);

      insert(item);
      break;
    case 2:
      del();
      break;
    case 3:
      display();
      break;
    case 4:
      break;
    default:
      printf("Wrong choice\n");
    }
  } while (choice != 4);

  return 0;
}
