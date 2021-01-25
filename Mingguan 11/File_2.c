#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

struct dict
{
    char sw[55];
    char ow[55];
};

int main()
{
    FILE *fp;
    fp = fopen("testdata.in", "r");

    int T;
    int tc;
    struct dict d[255];
    char stc[255];
    char temp[255];
    char w_list[255][255];
    while (!feof(fp))
    {
        fscanf(fp, "%d\n", &T);

        for (int k = 0; k < T; k++)
        {
            fscanf(fp, "%[^#]#%s\n", d[k].sw, d[k].ow);
        }

        fscanf(fp, "%d\n", &tc);
        for (int l = 1; l <= tc; l++)
        {
            fscanf(fp, "%[^\n]\n", stc);
            int len;
            len = strlen(stc);
            int i = 0;
            int j = 0;
            int k = 0;
            int st;

            //empty w_list array
            for (int a = 0; a < 255; a++)
            {
                for (int b = 0; b < 255; b++)
                {
                    w_list[a][b] = '\0';
                }
            }

            for (i = 0; i < len; i++)
            {
                if (stc[i] == ' ')
                {
                    j = 0;
                    memset(temp, 0, 255);
                    continue;
                }
                else
                {
                    temp[j] = stc[i];
                    if (stc[i + 1] == ' ' || stc[i + 1] == '\0')
                    {
                        st = 0;
                        while (st <= j)
                        {
                            w_list[k][st] = temp[st];
                            st++;
                        }
                        k++;
                    }
                    j++;
                }
            }

            for (int a = 0; a <= k; a++)
            {
                for (int b = 0; b < T; b++)
                {
                    if (strcmp(w_list[a], d[b].sw) == 0)
                    {
                        strcpy(w_list[a], d[b].ow);
                    }
                }
            }

            // printf("k = %d\n", k);
            printf("Case #%d:\n", l);
            for (int a = 0; a < k; a++)
            {
                if (a == k - 1)
                {
                    printf("%s\n", w_list[a]);
                }
                else
                {
                    printf("%s ", w_list[a]);
                }
            }
        }
    }

    fclose(fp);
    return 0;
}