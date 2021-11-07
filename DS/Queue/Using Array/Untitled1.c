#include <stdio.h>
#define MAX 5

typedef struct queue
{
  int front, rear;
  int q[MAX];
} que;
que qp;

void initqueue()
{
  qp.rear = -1;
  qp.front = -1;
}

void insert(int ele)
{
  if (qp.rear == MAX - 1)
  {
    printf("OVERFLOW\n");
  }
  if (qp.front == -1)
  {
    qp.rear = 0;
    qp.front = 0;
  }
  else
  {
    qp.rear++;
  }
  qp.q[qp.rear] = ele;
}

void del()
{
  if (qp.front == -1)
  {
    printf("UNDERFLOW\n");
  }
  if (qp.front == qp.rear)
  {
    qp.front = -1;
    qp.rear = -1;
  }
  else
  {
    qp.front++;
  }
}

void display()
{
  int i;
  if (qp.front == -1)
  {
    printf("Queue is empty \n");
  }
  else
  {
    printf("Queue is : ");
    for (i = qp.front; i <= qp.rear; i++)
      printf("%d ", qp.q[i]);
  }
}

int main()
{
  int ch;
  initqueue();
  while (1)
  {
    printf("Enter your choice: \n1 for INSERT \n2 for DELETE \n3 for DISPLAY \n4 for EXIT: \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
      int ele;
      printf("ENTER THE ELEMENT: ");
      scanf("%d", &ele);
      insert(ele);
      break;
    }
    case 2:
      del();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Wrong choice");
    }
  }
}
