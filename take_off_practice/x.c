#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int game_status=1;
    while (game_status)
    {
        if(c==0)
        {
            if (a<0)
            {
                printf("Aoki\n");
                game_status=0;
                break;
            }
            a--;
            c=1;
        }
        else
        {
            if (b<0)
            {
                printf("Takahashi\n");
                game_status=0;
                break;
            }
            b--;
            c=0;
        }
    }
    
}