#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int pow3(long long int x) {
    long long int mult = 1;
    for (int i = 0; i < 3; i++) {
        mult = mult * x;
    }
    return mult;
}

long long int binary(long long int a, long long int b, long long int c) {
    long long int l = 0, r = 100000, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if ((a * pow3(mid)) + (b * mid) < c) {
            l = mid + 1;
        } else if ((a * pow3(mid)) + (b * mid) >= c) {
            r = mid - 1;
        }
    }

    return l;
}

int main() {
    int n;
    scanf("%d", &n);
    long long int matrix[4][n + 5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &matrix[i][j]);
        }
    }

    long long int a = 0, b = 0, c = 0;
    long long int arr[n + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                a = matrix[j][i];
            } else if (j == 1) {
                b = matrix[j][i];
            } else if (j == 2) {
                c = matrix[j][i];
                arr[i] = binary(a, b, c);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%lld\n", arr[i]);
    }
    return 0;
}