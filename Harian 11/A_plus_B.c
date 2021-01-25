#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int main() {
    FILE *fp = fopen("testdata.in", "r");
    ll a, b;

    fscanf(fp, "%d %d\n", &a, &b);
    printf("%lld\n", a + b);
    return 0;
}