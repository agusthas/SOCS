#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int findBinary(long long int m) {
    long long int L = 0, R = 1500000, mid;

    while (L < R) {
        mid = L + (R - L) / 2;
        long long int formula = (mid * (mid + 1) * ((2 * mid) + 1)) / 6;
        if (formula < m)
            L = mid + 1;
        else
            R = mid;
    }
    return L;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int l = 0; l < tc; l++) {
        long long int m;
        scanf("%lld", &m);

        printf("Case #%d: %lld\n", l + 1, findBinary(m));
    }

    return 0;
}