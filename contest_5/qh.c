#include<stdio.h>

int SumOfArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int reverseArray(int arr[], int n) {    
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    return 0;
}
int removeFirstIndex(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    return arr[0];
}

int main() {
    int n;
    scanf("%d", &n);

    int A[n];
    int B[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);        
    }
    

    printf("%d\n", SumOfArray(A, n));
    
    reverseArray(A, n);
    

    printf("arry A: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    

    return 0;
}