#include <stdio.h>

// time complexity in best case is O(n^2)
void bubbleSort(int data[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp;
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
void transversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
// time complexity in best case is O(n)
void bubbleSortImproved(int data[], int size)
{
    int pass, i, temp, swapped = 1;
    for (pass = size - 1; pass >= 0 && swapped; pass--)
    {
        swapped = 0;
        for (i = 0; i <= pass - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
                swapped = 1;
            }
        }
    }
}
int main()
{
    int arr[] = {505, 966, 67, 122, 131, 55, 36, 97, 102, 32};
    int size = sizeof(arr) / sizeof(int);
    printf("Before Sorting\n");
    transversal(arr, size);

    bubbleSort(arr, size);
    printf("\nAfter Sorting with bubble sort\n");
    transversal(arr, size);

    bubbleSortImproved(arr, size);
    printf("\nAfter Sorting Improved version of bubble sort\n");
    transversal(arr, size);
    return 0;
}