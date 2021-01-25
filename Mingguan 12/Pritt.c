#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int myCompa(const void *a, const void *b) {
    ll *x = (long long int *)a;
    ll *y = (long long int *)b;

    return *x > *y ? 1 : -1;
}

ll search(ll *height, ll idx_start, ll idx_end, ll x) {
    while (idx_start <= idx_end) {
        ll mid = idx_start + (idx_end - idx_start) / 2;

        if (height[mid] == x) {
            return mid;
        }

        if (height[mid] < x) {
            idx_start = mid + 1;
        } else {
            idx_end = mid - 1;
        }
    }
    return -1;
}

int main() {
    ll N, Q, x, k;
    scanf("%lld", &N);
    long long int *height;
    height = malloc(sizeof(long long int) * (N + 2));
    for (ll i = 0; i < N; i++) {
        scanf("%lld", &height[i]);
    }

    qsort(height, N, sizeof(long long int), myCompa);

    scanf("%lld", &Q);
    for (ll i = 0; i < Q; i++) {
        scanf("%lld", &x);
        if ((k = search(height, 0, N - 1, x)) >= 0) {
            printf("%lld\n", k + 1);
        } else {
            printf("%lld\n", k);
        }
    }

    free(height);
    return 0;
}