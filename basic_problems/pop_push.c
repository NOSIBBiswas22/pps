#include <stdio.h>

// Function to pop an element from a given index (or last if you prefer)
void pop(int arr[], int *n, int index) {
    if (*n <= 0) {
        printf("Array is empty, cannot pop element.\n");
        return;
    }

    if (index < 0 || index >= *n) {
        printf("Invalid index.\n");
        return;
    }

    // Shift elements to remove the one at 'index'
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--; // Decrease array size
    printf("Element popped successfully.\n");
}

// Function to push an element at the end of the array
void push(int arr[], int *n, int capacity, int value) {
    if (*n >= capacity) {
        printf("Array is full, cannot push element.\n");
        return;
    }

    arr[*n] = value;
    (*n)++; // Increase size
    printf("Element pushed successfully.\n");
}

// Display the current array
void display(int arr[], int n) {
    printf("Current array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int capacity;
    scanf("%d", &capacity);

    int arr[capacity];
    int n = 0;

    // Initialize array with some values
    for (int i = 0; i < capacity; i++) {
        scanf("%d", &arr[i]);
        n++;
    }

    display(arr, n);

    // Example: pop the last element
    pop(arr, &n, n - 1);
    display(arr, n);

    // Example: push a new value
    push(arr, &n, capacity, 99);
    display(arr, n);

    return 0;
}
