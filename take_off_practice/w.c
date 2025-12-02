#include<stdio.h>

void num_in_word(int n){
    switch(n){
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        case 4: printf("four\n"); break;
        case 5: printf("five\n"); break;
        case 6: printf("six\n"); break;
        case 7: printf("seven\n"); break;
        case 8: printf("eight\n"); break;
        case 9: printf("nine\n"); break;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    if(1 <= n && n <= 9){
        num_in_word(n);
    } else {
        printf("Greater than 9\n");
    }
}