#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for (int l = 0; l < tc; l++) {
        int lenA, lenB, lenC;

        scanf("%d", &lenA);
        long potA[1005] = {0};
        for (int i = 0; i < lenA; i++) {
            scanf("%ld", &potA[i]);
        }

        scanf("%d", &lenB);
        long potB[1005] = {0};
        for (int i = 0; i < lenB; i++) {
            scanf("%ld", &potB[i]);
        }

        scanf("%d", &lenC);
        long potC[1005] = {0};
        for (int i = 0; i < lenC; i++) {
            scanf("%ld", &potC[i]);
        }

        long needLiter;
        scanf("%ld", &needLiter);

        //ALGORITHM
        long count = 0;
        for (int i = 0; i < lenA; i++) {
            long a = potA[i];
            for (int j = 0; j < lenB; j++) {
                long b = potB[j];
                for (int k = 0; k < lenC; k++) {
                    long c = potC[k];
                    long sum = a + b + c;
                    if (sum == needLiter) {
                        count++;
                    }
                }
            }
        }

        //Print
        printf("Case #%d: %ld\n", l + 1, count);
    }
    return 0;
}