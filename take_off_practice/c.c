#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    a = 7 - a;
    b = 7 - b;
    c = 7 - c;
    
    printf("%d\n", a+b+c);
    
    return 0;
}