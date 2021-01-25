#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ll long long int
#define gtc() getchar()
#define r 1010
#define c 1010

int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    FILE *fp = fopen("testdata.in", "r");

    int tc;
    int query;

    //dynamically allocate array
    char **listarr = malloc(r * sizeof(char *));
    for (int q = 0; q < r; q++)
    {
        listarr[q] = (char *)malloc(c);
    }

    fscanf(fp, "%d\n", &tc);
    for (int l = 1; l <= tc; l++)
    {
        // printf("\ttc = %d\n", l);
        fscanf(fp, "%d\n", &query);
        int len[r] = {0};
        int idx_p = 9999;
        int idx_s = 9999;
        int temp1, temp2, flag;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                listarr[i][j] = '\0';
            }
        }

        for (int k = 0; k < query; k++)
        {
            fscanf(fp, "%[^\n]\n", listarr[k]);
            len[k] = strlen(listarr[k]);
        }

        //FINDING INDEX FOR PREFIX
        flag = 0;
        for (int i = 1; i < query; i++)
        {
            for (int j = 0; j < len[0] && j < len[i]; j++)
            {
                if (listarr[i][j] != listarr[0][j])
                {
                    temp1 = j;
                    if (temp1 < idx_p)
                    {
                        idx_p = temp1;
                    }
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                if (minimum(len[0], len[i]) < idx_p)
                {
                    idx_p = minimum(len[0], len[i]);
                }
            }
        }

        //FINDING INDEX FOR SUFFIX
        flag = 0;
        for (int i = 1; i < query; i++)
        {
            for (int j = len[0] - 1, k = len[i] - 1; j >= 0 && k >= 0; j--, k--)
            {
                if (listarr[i][k] != listarr[0][j])
                {
                    temp2 = len[0] - 1 - j;
                    if (temp2 < idx_s)
                    {
                        idx_s = temp2;
                    }
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                if (minimum(len[0], len[i]) < idx_s)
                {
                    idx_s = minimum(len[0], len[i]);
                }
            }
        }

        printf("Case #%d: ", l);
        for (int i = 0; i < idx_p; i++)
        {
            printf("%c", listarr[0][i]);
        }
        for (int i = len[0] - idx_s; i < len[0]; i++)
        {
            printf("%c", listarr[0][i]);
        }
        printf("\n");
    }

    free(listarr);
    fclose(fp);
    return 0;
}