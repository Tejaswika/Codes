#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int A[r][c],transpose[c][r];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);}}
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = A[i][j];
        }
    printf("Transpose of two matrices: \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
            printf("a[%d][%d]: %d\n", i + 1, j + 1,transpose[i][j]);}}
}
