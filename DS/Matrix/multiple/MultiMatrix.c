#include <stdio.h>
main() {
    int m, n, p, q, i, j, k, sum = 0;
    printf("Enter the number of rows for 1st matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for 1st matrix: ");
    scanf("%d", &n);int A[m][n];
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < m; i++){for (j = 0; j < n; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);}}
    printf("Enter the number of rows for 2nd matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns for 2nd matrix: ");
    scanf("%d", &q);
    if (n != p)
        printf("The multiplication isn't possible.\n");
  else
  {int B[p][q],multiply[m][q];
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < p; i++){for (j = 0; j < q; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);}}
   for (i = 0; i < m; i++) {for (j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          sum = sum + A[i][k] * B[k][j];}
        multiply[i][j] = sum;
        sum = 0;}}
  printf("Multiplication of two matrices: \n");
    for (i = 0; i < m; i++){for (j = 0; j < q; j++) {
            printf("a[%d][%d]: %d\n", i + 1, j + 1,multiply[i][j]);}}}}


