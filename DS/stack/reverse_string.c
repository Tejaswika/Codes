#include<stdio.h>
int MAX=50,top=-1;
char string[100];
void pop();
void push();
void display();
int	main()
{
    int n;
  printf("enter the size of string");
  scanf("%d",&n);
  for (int i = 0; i < n; i++)
  {
      /* code */
      push();
  }
  for (int i = 0; i < n; i++)
  {
      /* code */
      pop();
      
  }
  
  
}
