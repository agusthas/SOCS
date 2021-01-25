#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int max = 49160;
    int *primes = (int *)malloc(5800 * sizeof(int));
    int n_primes = 0;
    for (int i = 2; i < max; i++) {
        // printf("i => %d\t", i);
        for (int j = 0; j < n_primes; j++) {
            if (i % primes[j] == 0) {
                goto not_prime;
            }
        }

        primes[n_primes] = i;
        n_primes++;

    not_prime:;
    }

    int tc;
    scanf("%d", &tc);

    for (int l = 0; l < tc; l++) {
        int n;
        scanf("%d", &n);

        int temp = (n * (n + 1)) / 2;
        for (int i = 0; i < temp; i++) {
            primes[i] = primes[i] % 10;
        }

        printf("Case #%d:\n", l + 1);
        for (int i = 1; i <= n; i++) {
            int maxP = (i * (i + 1)) / 2;
            int minP = maxP - (i - 1);

            for (int j = minP - 1; j < maxP; j++) {
                printf("%d", primes[j]);
            }
            printf("\n");
        }
    }

    free(primes);
    return 0;
}