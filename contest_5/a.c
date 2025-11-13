#include <stdio.h>
#define MOD 1000000007
#define MAXN 10000005  // Maximum n = 10^7

long long fact[MAXN];

// Modular exponentiation
long long modPow(long long base, long long exp, long long mod) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

// Precompute factorials modulo MOD
void precomputeFact() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
}

int main() {
    precomputeFact();

    int t;
    scanf("%d", &t);

    long long inv4 = modPow(4, MOD-2, MOD); // Modular inverse of 4 modulo MOD

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        int n;
        scanf("%d", &n);

        long long ans = fact[n];           // n!
        ans = (ans * n) % MOD;             // n! * n
        ans = (ans * (n-1)) % MOD;         // n! * n * (n-1)
        ans = (ans * inv4) % MOD;          // divide by 4 using modular inverse

        printf("Case %d: %lld\n", caseNum, ans);
    }

    return 0;
}
