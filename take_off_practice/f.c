#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    double tk = a*(b/100.0);

    printf("%g\n", tk);
    
    return 0;
}