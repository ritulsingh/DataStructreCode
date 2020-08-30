#include<stdio.h>
int linearSearch(int arr[], int element, int size){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int element, int size){
    int low, mid, high;
    low = 0;
    high = size-1;
    while (low<=high){
    mid = (low + high)/2;
    if (arr[mid]==element){
        return mid;
    }
    if (arr[mid]<element){
        low = mid +1;
    }
    else {
        high=mid-1;
    }
    }
    return -1;  
}

int main(){
    // It is work on Unsorted or sorted array but the time complexity is O(n) for linear search
    // int arr[] = {1,2,9,8,7,4,5,11,23,45,78};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 11;
    // int searchIndex = linearSearch(arr, size, element);
    // printf("The element %d was found at index %d \n", element, searchIndex);

    // It is work only sorted array but the time complexity is O(log n) for binary search
    int arr[] = {1,2,3,5,7,9,16,25,28,45,78};
    int size = sizeof(arr)/sizeof(int);
    int element = 2;
    int searchIndex = binarySearch(arr, element, size);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}