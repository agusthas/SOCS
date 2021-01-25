#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

typedef struct {
    char a[100];
} data;

int main() {
    FILE *fp = fopen("testdata.in", "r");

    ll N, M, q, line;
    char header[100];
    char new[100];
    fscanf(fp, "%lld %lld\n", &N, &M);
    data myArr[N + 5][M + 5];

    for (int i = 1; i <= N; i++) {
        // printf("\ti = %d\n", i);
        for (int j = 1; j <= M; j++) {
            fscanf(fp, "%[^;];", myArr[i][j].a);
        }
        fscanf(fp, "\n");
    }

    fscanf(fp, "%lld\n", &q);
    for (int i = 0; i < q; i++) {
        memset(header, 0, 100);
        memset(new, 0, 100);
        fscanf(fp, "%lld %[a-z] %[a-z]\n", &line, header, new);
        // printf("%d\n%s\n%s\n", line, header, new);
        for (int j = 1; j <= M; j++) {
            if (strcmp(header, myArr[1][j].a) == 0) {
                // printf("%s %s\n", myArr[1][j].a, header);
                strcpy(myArr[line][j].a, new);
                break;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            printf("%s;", myArr[i][j].a);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}
