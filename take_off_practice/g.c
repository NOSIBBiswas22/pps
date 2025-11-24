#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int dominoesCount = (m*n)/2;

    printf("%d\n", dominoesCount);
    
    return 0;
}