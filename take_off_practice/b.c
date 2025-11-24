#include<stdio.h>

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    n-=a;
    n+=b;
    
    printf("%d\n", n);
    
    return 0;
}