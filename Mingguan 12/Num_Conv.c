#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int myCompa(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;

    return *x > *y ? 1 : -1;
}

int search(int *min_arr, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (min_arr[mid] == x) {
            return mid;
        }

        if (min_arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1;
}

int main() {
    int tc;
    int N;
    scanf("%d", &tc);

    for (int l = 1; l <= tc; l++) {
        scanf("%d", &N);
        int *arr;
        arr = malloc(sizeof(int) * (N + 2));

        int *arr_copy;
        arr_copy = malloc(sizeof(int) * (N + 2));

        int *min_arr;
        min_arr = malloc(sizeof(int) * (N + 2));

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            arr_copy[i] = arr[i];
        }
        qsort(arr_copy, N, sizeof(int), myCompa);

        int idx = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arr_copy[i] != arr_copy[j]) {
                    min_arr[idx] = arr_copy[i];
                    idx++;
                    break;
                } else {
                    i = j;
                }
            }
            if (i == N - 1) {
                min_arr[idx] = arr_copy[i];
                idx++;
                break;
            }
        }

        int idx_x;
        for (int k = 0; k < N; k++) {
            idx_x = search(min_arr, 0, idx, arr[k]);
            if (idx_x != -1) {
                arr[k] = idx_x + 1;
            }
        }

        printf("Case #%d: ", l);
        for (int k = 0; k < N; k++) {
            if (k != N - 1) {
                printf("%d ", arr[k]);
            } else {
                printf("%d\n", arr[k]);
            }
        }

        free(arr);
        free(arr_copy);
        free(min_arr);
    }
    return 0;
}