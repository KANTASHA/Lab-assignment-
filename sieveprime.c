#include <stdio.h>
int printPrimes(int n) {
    int isPrime[n + 1];
    int count = 0;
for (int i = 0; i <= n; i++) {
        isPrime[i] = 1;
    }
isPrime[0] = 0;
    isPrime[1] = 0;
for (int p = 2; p * p <= n; p++) {
        if (isPrime[p] == 1) {

            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = 0;
            }
        }
    }
printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i] == 1) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");

    return count;
}

int main() {
    int limit = 50;
    int totalPrimes = printPrimes(limit);
printf("Total primes found: %d\n", totalPrimes);
    return 0;
}
