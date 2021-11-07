#include <stdio.h>
main() {
    int r, c,i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int A[r][c],B[r][c],Sum[r][c];
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);}}
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);}}
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];}}
    printf("Sum of two matrices: \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            printf("a[%d][%d]: %d\n", i + 1, j + 1,Sum[i][j]);}}
}
