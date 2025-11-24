#include<stdio.h>

int main() {
    int l, p, q;
    scanf("%d %d %d", &l, &p, &q);

    double distance = (double)l * p / (p + q);

    printf("%g\n", distance);

    return 0;
}