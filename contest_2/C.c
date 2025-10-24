#include <stdio.h>
#include <math.h>

int main() {
    float X, Y, Cx, Cy;
    float y, r, b, bk;

    scanf("%f %f %f %f", &X , &Y , &Cx, &Cy);
    scanf("%f %f %f %f", &y , &r , &b, &bk );

    float distance = sqrt((X - Cx) * (X - Cx) + (Y - Cy) * (Y - Cy));

    int score=0;

    if(distance<=y){
        score=100;
    }else if(distance<=r){
        score=75;
    }else if(distance<=b){
        score=50;
    }else if(distance<=bk){
        score=25;
    }else{
        score=0;
    }

    printf("%d", score);
    
    return 0;
}