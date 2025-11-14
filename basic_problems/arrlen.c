#include<stdio.h>

int main(){
    int n=5;
    int arr[5]={1, 2, 3 , 4, 5}; 

    int len = sizeof(arr)/ sizeof(arr[0]);

    printf("%d", len);
}