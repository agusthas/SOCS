#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[15];
    long long int deadline;
} data;

int deadline_compa(const void *a, const void *b) {
    data *x = (data *)a;
    data *y = (data *)b;

    return x->deadline > y->deadline ? 1 : -1;
}

void swapStruct(data *a, data *b) {
    data temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(data *subjects, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (subjects[i].deadline == subjects[j].deadline && i != n - 1) {
                if (strcmp(subjects[i].name, subjects[j].name) > 0) {
                    swapStruct(&subjects[i], &subjects[j]);
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    data subjects[n + 5];
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%s %lld", subjects[i].name, &subjects[i].deadline);
    }

    qsort(subjects, n, sizeof(data), deadline_compa);
    bubble(subjects, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", subjects[i].name);
    }

    return 0;
}