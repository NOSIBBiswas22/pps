#include <stdio.h>

int main() {
    int N, T, S;
    scanf("%d %d %d", &N , &T , &S);

    if(T>=N && S>=N){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}