#include<stdio.h>
void display(int arr[], int size){
    // transvers of the array
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indexInsertion(int arr[], int size, int element, int index, int capacity){
    if (size >= capacity) {
        return -1;
    }
    for (int i = size; i > index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main(){
    int arr[100] = {1,3,5,6,8,9,7,4,5};
    int element = 66;
    int index = 3;
    int size = 9;
    // int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    indexInsertion(arr, size, element, index, 100);
    size += 1;
    display(arr, size);
    return 0;
}