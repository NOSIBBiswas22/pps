#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int total_time = 0;
    int solved_problems = 0;

    for(int i=1; i<=n; i++){
        total_time += i * 5;

        if(total_time + k <= 240){
            solved_problems++;
        } else {
            break;
        }
    }

    printf("%d\n", solved_problems);
}