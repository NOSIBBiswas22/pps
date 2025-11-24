#include <stdio.h>

int calcfalgstones(int x, int a)
{
    if (x % a == 0)
    {
        return x / a;
    }
    else
    {
        return (x / a) + 1;
    }
}

int main()
{
    int m, n, a;
    scanf("%d %d %d", &m, &n, &a);

    int stones_length = calcfalgstones(m, a);
    int stones_width = calcfalgstones(n, a);
    int total_stones = stones_length * stones_width;

    printf("%d\n", total_stones);

    return 0;
}