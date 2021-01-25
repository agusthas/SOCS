#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    long plantId;
    char name[50];
} data;

int main() {
    FILE *fp = fopen("testdata.in", "r");

    int n;
    fscanf(fp, "%d", &n);

    data *plant = (data *)malloc(n * sizeof(data));
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%ld#%[^\n]", &plant[i].plantId, plant[i].name);
    }

    fclose(fp);

    //Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(plant[i].name, plant[j].name) > 0) {
                data temp = plant[i];
                plant[i] = plant[j];
                plant[j] = temp;
            }
        }
    }

    //print
    for (int i = 0; i < n; i++) {
        printf("%ld %s\n", plant[i].plantId, plant[i].name);
    }
    return 0;
}