#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ll long long int
#define gtc() getchar()

long randnumber(long low, long high) {
    return (rand() % (high - low + 1)) + low;
}

int main() {
    int tc = 100;
    printf("%d\n", tc);
    srand(time(0));
    int low = 1, high = 100;
    for (int i = 0; i < tc; i++) {
        printf("%ld\n", randnumber(low, high));
    }

    return 0;
}