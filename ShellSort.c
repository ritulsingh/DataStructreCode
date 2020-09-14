#include <stdio.h>

void shellSort(int data[], int size)
{
    int i, j, gap;
    for (gap = (size / 2); gap >= 1; gap = (gap / 2))
    {
        for (j = gap; j < size; j++)
        {
            for (i = (j - gap); i >= 0; i = (i - gap))
            {
                if (data[i + gap] > data[i])
                {
                    break;
                }
                else
                {
                    int temp;
                    temp = data[i + gap];
                    data[i + gap] = data[i];
                    data[i] = temp;
                }
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
int main()
{
    int arr[] = {50, 96, 67, 12, 31, 55, 1, 38, 10, 2};
    int size = sizeof(arr) / sizeof(int);
    printf("Before Insertion Sort\n");
    transversal(arr, size);

    shellSort(arr, size);
    printf("\nAfter Insertion sort\n");
    transversal(arr, size);
    return 0;
}