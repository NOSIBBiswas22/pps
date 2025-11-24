#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    
    int totalCost = x + (y / 2);

    printf("%d\n", totalCost);
    
    return 0;
}