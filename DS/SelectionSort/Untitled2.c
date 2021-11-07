#include <stdio.h>
int main() {
   int array[100], n, i, j, swap,position;

  printf("Enter number of elements: \n");
  scanf("%d", &n);

  printf("Enter %d elements\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
