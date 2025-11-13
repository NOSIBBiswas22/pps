#include <stdio.h>

long long SumOfArray(int arr[], int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int removeFirstIndex(int arr[], int n)
{
    int first = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    return first;
}

int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    int B[n];
    int sizeA = n;
    int indexB = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    while (sizeA > 0)
    {
        if (SumOfArray(A, sizeA) % 2 != 0)
        {
            reverseArray(A, sizeA);
        }

        B[indexB++] = removeFirstIndex(A, sizeA);
        sizeA--;
    }

    printf("%lld\n", SumOfArray(B, n));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}