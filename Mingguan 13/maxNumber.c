#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int number[105] = {0};
    int toRemoved[105] = {0};
    for (int i = 0; i < N; i++) {
        scanf("%d", &number[i]);
    }
    bubble(number, N);

    for (int i = 0; i < M; i++) {
        scanf("%d", &toRemoved[i]);
    }
    bubble(toRemoved, M);

    for (int i = 0; i < M; i++) {
        int a = toRemoved[i];
        for (int j = 0; j < N; j++) {
            if (number[j] == a) {
                number[j] = 0;
            }
        }
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }

    printf("Maximum number is %d\n", max == 0 ? -1 : max);

    return 0;
}