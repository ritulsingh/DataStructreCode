#include<stdio.h>
void display(int arr[], int size){
    // transvers of the array
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indexDeletion(int arr[], int size, int index){
    for (int i = index; i < size; i++) {
        arr[i] = arr[i+1];
    }
}
int main(){
    int arr[100] = {1,3,5,6,8,9,7,4,5};
    int index = 3;
    int size = 9;
    // int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    indexDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}