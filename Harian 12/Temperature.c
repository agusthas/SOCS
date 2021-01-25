#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char kota[1005];
    double temperature;
    char metrics;
    double convertToC;
} data;

int myCompa(const void *a, const void *b) {
    data *x = (data *)a;
    data *y = (data *)b;

    return x->convertToC > y->convertToC ? 1 : -1;
}

void swapStruct(data *a, data *b) {
    data temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    data city[105];
    int idx = 0;
    while ((fscanf(fp, "%[^#]#%lf#%c\n", city[idx].kota, &city[idx].temperature, &city[idx].metrics)) != EOF) {
        if (city[idx].metrics == 'F')
            city[idx].convertToC = (city[idx].temperature - 32) * 5 / 9;
        else
            city[idx].convertToC = city[idx].temperature;

        idx++;
    }

    qsort(city, idx, sizeof(data), myCompa);
    for (int i = 0; i < idx; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (city[i].convertToC == city[j].convertToC && i != idx - 1) {
                if (strcmp(city[i].kota, city[j].kota) > 0) {
                    swapStruct(&city[i], &city[j]);
                }
            }
        }
    }

    for (int i = 0; i < idx; i++) {
        printf("%s is %.2lf%c\n", city[i].kota, city[i].temperature, city[i].metrics);
    }

    return 0;
}