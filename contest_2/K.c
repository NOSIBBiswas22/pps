#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int Q;
    scanf("%d", &Q);
    
    while (Q--) {
        int L, R;
        scanf("%d %d", &L, &R);
        
        long long sum = 0;
        
        for (int i = L; i <= R; i++) {
            sum += countOnes(i);
        }
        
        // // Check if sum is prime
        // if (isPrime(sum)) {
        //     printf("Prime\n");
        // } else {
        //     printf("Not Prime\n");
        // }
    }
    
    return 0;
}