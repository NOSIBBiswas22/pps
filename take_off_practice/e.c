#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    double c = ((a-b)/3.0)+b;

    printf("%.10g\n", c);
    
    return 0;
}