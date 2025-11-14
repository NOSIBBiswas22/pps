#include<stdio.h>

// void popFirstElement(int arr[], int *n) {
//     if (*n <= 0) {
//         printf("Array is empty, cannot pop element.\n");
//         return;
//     }

//     // Shift elements to remove the first element
//     for (int i = 1; i < *n; i++)
//     {
//         arr[i-1] = arr[i];
//     }
//     (*n)--;
// }

void popAt(int arr[], int *n, int index){
    if(*n <=0){
        return;
    }
    for (int i = index; i < (*n); i++)
    {
        arr[i] = arr[i+1];
    }
    (*n)--;
}

int main(){
    int n=5;
    int arr[5]={1, 2, 3 , 4, 5}; 

    int index;
    scanf("%d", &index);

    popAt(arr, &n, index);
    // Printing the array after popping the first element
    printf("Array after popping the first element: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}