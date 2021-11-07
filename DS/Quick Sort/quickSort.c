
#include<stdio.h>
#include<conio.h>

void quicksort(int a[], int p, int r)

{
if(p < r)
{
int q;
q = partition(a, p, r);
quicksort(a, p, q-1);
quicksort(a, q+1, r);
}
}
int partition (int a[], int p, int r)
{
int i, j, pivot, temp;
pivot = a[p];
i = p;
j = r;
while(1)
{
while(a[i] < pivot && a[i] != pivot)
i++;
while(a[j] > pivot && a[j] != pivot)
j--;
if(i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
else
{
return j;
}}}
int main(){
   int i, count, number[25];

   printf("Enter the no. of elements: ");
   scanf("%d",&count);

   printf("Enter %d elements: \n", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Sorted elements: \n");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}

