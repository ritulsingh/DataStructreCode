#include<stdio.h>
int arr[100];
void create(int size){
    for (int i = 0; i <= size; i++)
    {
        printf("Enter the elements of the array " , i);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int size){
    printf("The element of the array :\n");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    } 
}

int insert(int arr[], int size, int capacity){
    int index, element;
    printf("Enter the index : ");
    scanf("%d", &index);
    printf("Enter the element : ");
    scanf("%d", &element);
    if (size >= capacity) {
        return -1;
    }
    for (int i = size; i > index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

// void delete(){
    
// }
// void search(){
    
// }
int main(){
    int choose;
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    do {
    printf("\nEnter you choose \n");
    printf("Press 1 for create a array\n");
    printf("Press 2 for display a element in a array\n");
    printf("Press 3 for insert a element in a array\n");
    printf("Press 4 for delete a element in a array\n");
    printf("Press 5 for search a element in a array\n");
    printf("Press 6 for exit from the array operation\n");
    scanf("%d",&choose);
    
    switch (choose)
    {
    case 1:
        create(size);
        break;
    case 2:
        display(arr, size);
        break;
    case 3:
        insert(arr, size, 100);
        break;
    default:
        break;
    }
    } while (choose!=6);
    return 0;
}