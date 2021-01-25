#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ll long long int
#define gtc() getchar()

int cmpfunct(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    FILE *fp = fopen("testdata.in", "r");
    int tc, n, m, idx_1, idx_2;

    fscanf(fp, "%d\n", &tc);
    // printf("tc = %d\n", tc);
    for (int l = 1; l <= tc; l++)
    {
        fscanf(fp, "%d %d\n", &n, &m);
        char array[555][555];
        // printf("%d %d\n", n, m);

        int l_count[555] = {0};
        int c_count[555] = {0};
        idx_1 = 0;
        idx_2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                fscanf(fp, "%c", &array[i][j]);
            }
            fgetc(fp);
        }

        //scan buat line nya
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (array[i][j] != '.')
                {
                    l_count[idx_1] = i;
                    idx_1++;
                    break;
                }
            }
        }

        //scan buat column nya
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (array[i][j] != '.')
                {
                    c_count[idx_2] = j;
                    idx_2++;
                    break;
                }
            }
        }

        //sorting
        qsort(l_count, idx_1, sizeof(int), cmpfunct);
        qsort(c_count, idx_2, sizeof(int), cmpfunct);

        printf("Case #%d:\n", l);
        printf("%d %d\n", (l_count[idx_1 - 1] - l_count[0]) + 1, (c_count[idx_2 - 1] - c_count[0]) + 1);
        for (int i = l_count[0]; i <= l_count[idx_1 - 1]; i++)
        {
            for (int j = c_count[0]; j <= c_count[idx_2 - 1]; j++)
            {
                printf("%c", array[i][j]);
            }
            printf("\n");
        }
    }
    fclose(fp);
    return 0;
}