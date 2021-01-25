#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

typedef struct {
    char nama[45];
    char tree[45];
} data;
int main() {
    FILE *fp = fopen("testdata_planting.in", "r");
    int rec, tc;
    data ppl[104];
    char temp[45];
    fscanf(fp, "%d\n", &rec);
    for (int i = 0; i < rec; i++) {
        fscanf(fp, "%[^#]#%[^\n]\n", ppl[i].nama, ppl[i].tree);
    }
    // for (int i = 0; i < rec; i++) {
    //     printf("%s %s\n", ppl[i].nama, ppl[i].tree);
    // }
    fscanf(fp, "%d\n", &tc);
    for (int i = 1; i <= tc; i++) {
        int x = -1;
        memset(temp, 0, 45);
        fscanf(fp, "%s\n", temp);

        for (int j = 0; j < rec; j++) {
            if (strcmp(ppl[j].nama, temp) == 0) {
                x = j;
                break;
            }
        }
        if (x != -1) {
            printf("Case #%d: %s\n", i, ppl[x].tree);
        } else {
            printf("Case #%d: N/A\n", i);
        }
    }

    return 0;
}