#include<stdio.h>

int main(){
    int n, w, brickCount=0, cWeight=0;
    scanf("%d %d", &n, &w);

    while (n>=cWeight)
    {
        cWeight+=w;
        if (cWeight<=n)
        {
            brickCount++;
        }
        
    }
    printf("%d\n", brickCount);
    
    return 0;
}