#include <stdio.h>

void mergeSort(int A[], int temp[], int left, int right)
{
    int mid;
    if (right > left)
    {
        mid = (right + left) / 2;
        mergeSort(A, temp, left, mid);
        mergeSort(A, temp, mid+1, right);
        mergeArray(A, temp, left, mid+1, right);
    }
}

void mergeArray(int A[], int temp[], int left, int mid, int right)
{
    int i, left_end, size, temp_pos;
    left_end = mid - 1;
    temp_pos = left;
    size = right - left + 1;
    while ((left <= left_end) && (mid <= right))
    {
        if (A[left] <= A[mid])
        {
            temp[temp_pos] = A[left];
            temp_pos = temp_pos + 1;
            left = left + 1;
        }
        else
        {
            temp[temp_pos] = A[mid];
            temp_pos = temp_pos + 1;
            mid = mid + 1;
        }
    }
    while (left <= left_end)
    {
        temp[temp_pos] = A[left];
        left = left + 1;
        temp_pos = temp_pos + 1;
    }
    while (mid <= right)
    {
        temp[temp_pos] = A[mid];
        mid = mid + 1;
        temp_pos = temp_pos + 1;
    }
    for (i = 0; i < size; i++)
    {
        A[right] = temp[right];
        right = right + 1;
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
    int temp[size];
    printf("Before Insertion Sort\n");
    transversal(arr, size);
    mergeSort(arr, temp, 0, size-1);
    printf("\nAfter Insertion sort\n");
    transversal(arr, size);
    return 0;
}