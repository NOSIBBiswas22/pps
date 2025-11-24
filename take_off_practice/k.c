#include <stdio.h>

int minimum_number_of_bills(int n)
{
    int count = 0;
    int denominations[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        count += n / denominations[i];
        n %= denominations[i];
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", minimum_number_of_bills(n));
    
    return 0;
}