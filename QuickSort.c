#include<stdio.h>
void quickSort(int data[], int low, int high){
    int lac;
    if (low < high)
    {
        // Termination condition
        lac = quickPartition(data, low, high);
        quickSort(data, low, lac-1);
        quickSort(data, lac+1, high);
    }
    
}
int quickPartition(int data[], int low, int high){
    int temp;
    int start = low;
    int end = high;
    int pivot = data[low];
    while (start < end)
    {
        // Move start while item < pivot
        while (data[start] <= pivot)
        {
            start++;
        }
        // Move end while item > pivot
        while (data[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = data[start];
            data[start] = data[end];
            data[end] = temp;
        }
    }
    // end is final position for the pivot
    data[low] = data[end];
    data[end] = pivot;
    return end;    
}
void transversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[] = {50, 96, 7, 52, 67, 12, 31, 55, 1, 38, 10, 2};
    int size = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = size-1;
    printf("Before Quick Sort\n");
    transversal(arr, size);

    quickSort(arr, low, high);
    printf("\nAfter Quick sort\n");
    transversal(arr, size);
    return 0;
 
}