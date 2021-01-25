#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int myComp(const void *a, const void *b) {
    return (*(double *)a - *(double *)b);
}

int main() {
    int tc;
    ll N;
    scanf("%d", &tc);

    for (int l = 1; l <= tc; l++) {
        scanf("%lld", &N);

        double *arr;
        arr = malloc(5005 * sizeof(double));

        double sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%lf", &arr[i]);
            sum += arr[i];
        }
        qsort(arr, N, sizeof(double), myComp);

        int mid = (N - 1) / 2;
        //mean
        double mean = sum / N;
        //median
        double median = 0;
        if (N % 2 != 0) {
            median = arr[mid];
        } else {
            median = (arr[mid] + arr[(mid + 1)]) / 2;
        }

        printf("Case #%d:\n", l);
        printf("Mean : %.2lf\n", mean);
        printf("Median : %.2lf\n", median);
        free(arr);
    }

    return 0;
}