void permute(int *arr, int left, int right, int **per, int rows) {
    int k = 0, j;

    if (left == right) {
        for (j = 0; j <= right; j++)
            printf("%d ", arr[j]);
        printf("\n");
        /*(for(j = 0; j <= right; j++)
    {
        per[k][j] = arr[j];
        k++;
        if(k == rows)
        eturn;
    }*/
    }
    for (j = left; j <= right; j++) {
        swap(arr + left, arr + j);
        permute(arr, left + 1, right, per, rows);
        swap(arr + left, arr + j);
    }
}

int main(void) {
    int a[3], i, j, **b;

    for (i = 0; i < 3; i++)
        a[i] = i;
    b = malloc(4 * sizeof(int *));
    for (i = 0; i < 4; i++)
        b[i] = malloc(3 * sizeof(int));
    permute(a, 0, 2, b, 4);
    for (i = 0; i < 4; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d ", b[i][j]);
    }
    printf("\n");
    return 0;