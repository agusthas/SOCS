#include <stdio.h>

int prime(int a) {
    int flag = 0;

    for (int j = 3; j * j <= a; j += 2) {
        if (a % j == 0) {
            flag = 1;
            break;
        }
    }
    if (!flag) {
        return a % 10;
    }

    return -1;
}

int main() {
    int test;
    scanf("%d\n", &test);

    for (int t = 1; t <= test; t++) {
        int n, awal = 3;
        scanf("%d", &n);

        printf("Case #%d:\n", t);

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (i == 1)
                    printf("2");
                else {
                    for (int k = awal;;) {  // 2 3 5 7 0 11 13 0
                        if (prime(k) == -1) {
                            k += 2;
                        } else {
                            printf("%d", prime(k));
                            k += 2;
                            awal = k;
                            break;
                        }
                    }
                }
            }
            printf("\n");
        }
    }
}