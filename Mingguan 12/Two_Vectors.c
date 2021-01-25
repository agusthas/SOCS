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

ll factorial(ll n) {
    ll res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

void swap(ll *a, ll *b) {
    ll temp = *a;
    *a = *b;
    *b = temp;
}

// TODO: GANTI KE BUBBLE SORT ASCEND AND DESCEND
void permute(ll *arr, ll l, ll r, ll **per, ll *pRow, ll rows) {
    if (l == r) {
        if (*pRow < rows) {
            for (int j = 0; j <= r; j++) {
                per[*pRow][j] = arr[j];
            }
            ++(*pRow);
        }
    }

    for (int i = l; i <= r; i++) {
        swap((arr + l), (arr + i));
        permute(arr, l + 1, r, per, pRow, rows);
        swap((arr + l), (arr + i));
    }
}

int main() {
    int tc;
    ll N;
    scanf("%d", &tc);
    for (int l = 1; l <= tc; l++) {
        scanf("%lld", &N);

        ll *v1, *v2;
        v1 = malloc(sizeof(long long int) * (N + 5));
        v2 = malloc(sizeof(long long int) * (N + 5));

        ll fact = factorial(N);
        ll **per1 = malloc(sizeof(long long int) * (fact + 2));
        for (int i = 0; i < (fact + 2); i++) {
            per1[i] = malloc(sizeof(long long int) * (N + 5));
        }

        // v1
        for (int k = 0; k < N; k++) {
            scanf("%lld", &v1[k]);
        }
        // v2
        for (int k = 0; k < N; k++) {
            scanf("%lld", &v2[k]);
        }

        ll row = 0;
        permute(v1, 0, N - 1, per1, &row, fact);

        ll sum[row];
        memset(sum, 0, row * sizeof(long long int));
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < N; j++) {
                sum[i] = sum[i] + (v2[j] * per1[i][j]);
            }
        }
        qsort(sum, row, sizeof(long long int), myCompa);

        ll min_dot = sum[0];
        printf("Case #%d: %lld\n", l, min_dot);
    }
    return 0;
}