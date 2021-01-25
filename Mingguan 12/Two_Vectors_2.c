#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

void swap(ll *a, ll *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void b_sort_ascend(ll *v, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (v[j - 1] > v[j]) {
                swap(&v[j - 1], &v[j]);
            }
        }
    }
}

void b_sort_descend(ll *v, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (v[j - 1] < v[j]) {
                swap(&v[j - 1], &v[j]);
            }
        }
    }
}

int main() {
    int tc;
    int N;
    scanf("%d", &tc);
    for (int l = 1; l <= tc; l++) {
        scanf("%d", &N);

        ll *v1, *v2;
        v1 = malloc(sizeof(long long int) * (N + 5));
        v2 = malloc(sizeof(long long int) * (N + 5));

        memset(v1, 0, N);
        memset(v2, 0, N);
        // v1
        for (int k = 0; k < N; k++) {
            scanf("%lld", &v1[k]);
        }
        b_sort_ascend(v1, N);

        // v2
        for (int k = 0; k < N; k++) {
            scanf("%lld", &v2[k]);
        }
        b_sort_descend(v2, N);

        ll sum = 0;
        for (int k = 0; k < N; k++) {
            sum = sum + (v1[k] * v2[k]);
        }

        printf("Case #%d: %lld\n", l, sum);

        free(v1);
        free(v2);
    }
    return 0;
}