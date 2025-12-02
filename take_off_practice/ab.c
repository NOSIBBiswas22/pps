#include <stdio.h>
#include <string.h>

int main()
{
    char S[4];
    scanf("%s", S);

    int ans = 0;
    int count = 0;
    
    // RSS
    for (int i = 0; i < 3; i++)
    {
        if (S[i] == 'R')
        {
            count++;
            if (count > ans)
            {
                ans = count;
            }
        }else{
            count = 0;
        }
    }

    printf("%d\n", ans);

    return 0;
}