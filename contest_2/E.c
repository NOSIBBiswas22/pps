#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N , &X);
    int arr[N];

    for(int i=0; i<N; i++){
        int score;
        scanf("%d", &score);
        arr[i]=score;
    }

    int i=1;

    while (i<N)
    {
        if (i == N-1)
        {       
            printf("Yeee! Argentina\n");
            return 0;
        }
        if (arr[i]%X==0)
        {
            i+=2;
        }else{
            i+=1;
        }
        
    }
    
    printf("Messi missed the penalty!\n");

    return 0;
}