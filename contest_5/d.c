#include<stdio.h>

int main() {
    long long int M, A, H, I, R, T;
    
    scanf("%lld %lld %lld %lld %lld", &M, &A, &H, &I, &R);


    if(M>0){
        T = (M*A)+((M-1)*H)+I;
    }else{
        T = I;
    }

    if (T<=R){
        printf("Congratulations Ichigo\n");
    }else{
        printf("Ichigo will Die single\n");
    }
    
    return 0;
}