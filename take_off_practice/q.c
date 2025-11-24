#include<stdio.h>

int maximum(int x, int y, int z){
    if(x >= y && x >= z){
        return x;
    } else if(y >= x && y >= z){
        return y;
    } else {
        return z;
    }
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a + b;
    int diff = a - b;
    int multi = a * b;

    int max = maximum(sum, diff, multi);

    printf("%d\n", max);
}