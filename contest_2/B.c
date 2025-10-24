#include <stdio.h>

int main() {
    int X, Y, H, M;
    scanf("%d %d %d %d", &X , &Y , &H, &M);

    if(H>=X && M>=Y){
        printf("He is the thief!\n");
    }else{
        printf("He is innocent!\n");
    }

    return 0;
}