#include <stdio.h>

int main()
{
    long long int m, n, a;
    scanf("%lld %lld %lld", &m, &n, &a);

    long long int stones_length = (n + a - 1) / a;
    long long int stones_width = (m + a - 1) / a;
    long long int total_stones = stones_length * stones_width;

    printf("%lld\n", total_stones);
    
    return 0;
}