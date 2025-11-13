#include<stdio.h>

int main() {
    int n, k, w=0;
    scanf("%d %d", &n, &k);

    int runs[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &runs[i]);        
    }
    for (int i = 0; i < n-1; i++)
    {
        if ((runs[i]+runs[i+1])>k)
        {
            w++;
        }
    }
    
    printf("%d\n", w);
    
    return 0;
}