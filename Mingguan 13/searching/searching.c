#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char id[15];
    char name[25];
} data;

int binarySearchID(data *a, int n, char *key) {
    int l = 0, r = n - 1, mid;

    while (l <= r) {
        mid = (l + r) / 2;
        if (strcmp(key, a[mid].id) == 0)
            return mid;
        else if (strcmp(key, a[mid].id) > 0)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int main() {
    FILE *fp = fopen("testdata.in", "r");

    int numberOfStudent;
    fscanf(fp, "%d", &numberOfStudent);

    data *student = (data *)malloc(numberOfStudent * sizeof(data));
    for (int i = 0; i < numberOfStudent; i++) {
        fscanf(fp, "%s %s\n", student[i].id, student[i].name);
    }

    int tc;
    fscanf(fp, "%d", &tc);
    for (int i = 0; i < tc; i++) {
        char key[20];
        fscanf(fp, "%s", key);
        int search = binarySearchID(student, numberOfStudent, key);
        printf("Case #%d: %s\n", i + 1, search != -1 ? student[search].name : "N/A");
    }

    free(student);
    fclose(fp);
    return 0;
}