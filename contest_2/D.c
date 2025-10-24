#include <stdio.h>
#include <math.h>

int main() {
    float Hx, Hy, Ax, Ay, Bx, By;

    scanf("%f %f %f %f %f %f", &Hx , &Hy , &Ax, &Ay, &Bx, &By);

    float dForA = sqrt((Ax - Hx) * (Ax - Hx) + (Ay - Hy) * (Ay - Hy));
    float dForB = sqrt((Bx - Hx) * (Bx - Hx) + (By - Hy) * (By - Hy));

    if(dForA<=dForB){
        printf("First\n");
    }else{
        printf("Second\n");
    }
    
    return 0;
}