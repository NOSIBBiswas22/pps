#include <stdio.h>

int secondMax(int a, int b, int c)
{
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    else
        return c;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", secondMax(a, b, c));
    }

    return 0;
}