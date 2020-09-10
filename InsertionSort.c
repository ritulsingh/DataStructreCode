#include <stdio.h>

void insertionSort(int data[], int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}
void transversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {50, 96, 67, 12, 31, 55, 36, 38, 10, 2};
    int size = sizeof(arr) / sizeof(int);
    printf("Before Insertion Sort\n");
    transversal(arr, size);

    insertionSort(arr, size);
    printf("\nAfter Insertion sort\n");
    transversal(arr, size);
    return 0;
}