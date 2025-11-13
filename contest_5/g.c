#include <stdio.h>
#include <string.h>

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int k;

        scanf("%d", &k);

        int score = 0;
        int wickets = 0;
        int noBallStatus = 0;

        for (int i = 0; i < k && (wickets<10); i++)
        {
            int x;
            scanf("%d", &x);

            for (int j = 0; j < x && (wickets<10); j++)
            {
                char ball[3];
                scanf("%s", &ball);

                
                if (strcmp(ball, "N") == 0)
                {
                    score += 1;
                    noBallStatus = 1;
                }
                else if (strcmp(ball, "B") == 0)
                {
                    if (!noBallStatus)
                    {
                        wickets += 1;
                    }
                    noBallStatus = 0;
                }
                else if (strcmp(ball, "C") == 0)
                {
                    if (!noBallStatus)
                    {
                        wickets += 1;
                    }
                    noBallStatus = 0;
                }
                else if (strcmp(ball, "R") == 0)
                {
                    wickets += 1;
                    noBallStatus = 0;
                }
                else if (strcmp(ball, "W") == 0)
                {
                    score += 1;
                }
                else
                {
                    if (ball[0] >= '0' && ball[0] <= '9')
                    {
                        score += ball[0] - '0';
                    }
                    noBallStatus = 0;
                }
            }
        }
        printf("%d\n", score);
    }

    return 0;
}