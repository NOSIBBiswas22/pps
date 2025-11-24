#include<stdio.h>

int main(){
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total_price=0;

    for(int i=1; i<=w; i++){
        total_price += i*k;
    }

    int borrow_amount = total_price - n;

    if (borrow_amount < 0) {
        borrow_amount = 0;
    }
    
    printf("%d\n", borrow_amount);
}