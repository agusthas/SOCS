#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[105];
} data;

int nameCompa(const void *a, const void *b) {
    data *x = (data *)a;
    data *y = (data *)b;

    return strcmp(x->name, y->name);
}

int main() {
    int tc, n;
    scanf("%d", &tc);
    for (int l = 0; l < tc; l++) {
        scanf("%d", &n);
        data list[n + 5];
        for (int i = 0; i < n; i++) {
            getchar();
            scanf("%s", list[i].name);
        }
        qsort(list, n, sizeof(data), nameCompa);

        int ctr = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(list[i].name, list[i + 1].name) != 0 && i != n - 1) {
                ctr++;
            }
        }

        printf("Case #%d: %d\n", l + 1, ctr + 1);
    }
    return 0;
}