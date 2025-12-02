#include<stdio.h>

int main(){
    int v, t, s, d;
    scanf("%d %d %d %d", &v, &t, &s, &d);

    int dt = v * t;
    int ds = v * s;

    if(dt <= d && d <= ds){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}