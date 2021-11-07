#include <stdio.h>
#include <math.h>

int max;
void merge(int a[], int p, int q, int r)
{
    int b[max];
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while (i <= q && j <= r)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    while (i <= q)
    {
        b[k++] = a[i++];
    }
    while (j <= r)
    {
        b[k++] = a[j++];
    }
    for (i = r; i >= p; i--)
    {
        a[i] = b[--k]; 
    }
}
void mergesort(int a[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = floor((p + r) / 2);
        mergesort(a, p, q);
        mergesort(a, q + 1, r);
        merge(a, p, q, r);
    }
}
void printArray(int arr[], int max)
{
    for (int i = 0; i < max; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    printf("Enter the MAX size of array: ");
    scanf("%d", &max);
    int arr[max];
    printf("ENTER THE ARRAY ELEMENT: \n");
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, max - 1);

    printf("Sorted array: \n");
    printArray(arr, max);
}
