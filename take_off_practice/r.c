#include<stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);

    if (A > 0 && B == 0) {
        printf("Gold\n");
    } else if (A == 0 && B > 0) {
        printf("Silver\n");
    } else if (A > 0 && B > 0) {
        printf("Alloy\n");
    }

    return 0;
}