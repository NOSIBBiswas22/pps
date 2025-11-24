#include<stdio.h>

int main(){
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--)
    {
        int n, w, brickCount=0, cWeight=0;
        int caseIndex = 1;
        scanf("%d %d", &n, &w);

        while (n>=cWeight)
        {
            cWeight+=w;
            if (cWeight<=n)
            {
                brickCount++;
            }
            
        }
        printf("case %d: %d\n", caseIndex, brickCount);
        caseIndex++;
    }
    
    return 0;
}