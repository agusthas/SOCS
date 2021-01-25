#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int main() {
    FILE *fp = fopen("testdata.in", "r");

    ll N;
    ll M;

    fscanf(fp, "%d %d\n", &N, &M);
    // printf("%lld %lld\n", N, M);
    char village[N + 1];

    fscanf(fp, "%[^\n]\n", village);
    ll len = strlen(village);

    // printf("%s\n", village);

    ll ctr = 0, logs = 0;
    for (int i = 0; i < len; i++) {
        if (village[i] == '0') {
            ctr = 0;
            continue;
        } else {
            ctr++;
            if (village[i + 1] == '0' || i == len - 1) {
                if (ctr >= M) {
                    logs++;
                }
            }
        }
    }
    printf("%lld\n", logs);
    fclose(fp);

    return 0;
}