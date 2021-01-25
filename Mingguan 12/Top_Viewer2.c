#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

typedef struct {
    char video[1005];
    char nama[1005];
    ll view;
} data;

void swapStruct(data *a, data *b) {
    data temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* SELECTION SORT */
void s_sort(data *ppl, int n) {
    int i, j, idx_low;
    for (int i = 0; i < n - 1; i++) {
        idx_low = i;
        for (int j = i + 1; j < n; j++) {
            if (ppl[idx_low].view < ppl[j].view) {
                idx_low = j;
            }
        }
        if (idx_low > i) {
            swapStruct(&ppl[i], &ppl[idx_low]);
        }
    }
}

void vidsort(data *ppl, int x, int y) {
    for (int i = x; i <= y; i++) {
        for (int j = i + 1; j <= y; j++) {
            if (strcmp(ppl[i].video, ppl[j].video) > 0) {
                swapStruct(&ppl[i], &ppl[j]);
            }
        }
    }
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    data ppl[105];
    int idx = 0;
    char ch;
    while (fscanf(fp, "%[^#]#%[^#]#%lld\n", ppl[idx].video, ppl[idx].nama, &ppl[idx].view) != EOF) {
        idx++;
    }
    s_sort(ppl, idx);
    int start, end;
    for (int i = 0; i < idx; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (ppl[i].view == ppl[j].view) {
                if (strcmp(ppl[i].video, ppl[j].video) > 0) {
                    swapStruct(&ppl[i], &ppl[j]);
                }
            }
        }
    }
    for (int i = 0; i < idx; i++) {
        printf("%s by %s - %lld\n", ppl[i].video, ppl[i].nama, ppl[i].view);
    }
    fclose(fp);
    return 0;
}