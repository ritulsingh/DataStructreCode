#include <stdio.h>

void selectionSort(int data[], int size)
{
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (data[j] < data[min])
            {
                min = j;
            }
        }
        temp = data[min]; // Swap the elements
        data[min] = data[i];
        data[i] = temp;
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
    printf("Before  Selection Sort\n");
    transversal(arr, size);

    selectionSort(arr, size);
    printf("\nAfter Sorting with selection sort\n");
    transversal(arr, size);
    return 0;
}