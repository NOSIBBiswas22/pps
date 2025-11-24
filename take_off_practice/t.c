#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int first_digit = num / 100;
    int last_digit = num % 10;
    
    if (first_digit == last_digit)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}