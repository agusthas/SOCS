#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

struct dict
{
    char sw[101];
    char ow[101];
};

int main()
{
    FILE *fp;
    fp = fopen("testdata4.in", "r");

    int T;
    int tc;
    struct dict d[101];
    char stc[101];
    char temp[101];
    char w_list[101][101];
    int len;
    int flag;
    int j;
    while (!feof(fp))
    {
        fscanf(fp, "%d\n", &T);
        // printf("T = %d\n", T);

        for (int k = 0; k < T; k++)
        {
            fscanf(fp, "%[^#]#%s\n", d[k].sw, d[k].ow);
        }

        // for (int i = 0; i < T; i++)
        // {
        //     printf("d[%d].sw = %s\n", i, d[i].sw);
        //     printf("d[%d].ow = %s\n", i, d[i].ow);
        // }

        fscanf(fp, "%d\n", &tc);
        // printf("tc = %d\n", tc);
        for (int l = 1; l <= tc; l++)
        {
            fscanf(fp, "%[^\n]\n", stc);
            int len = strlen(stc);
            // printf("len = %d\n", len);
            flag = 1;
            j = 0;
            // printf("\t%d\n", l);
            // printf("stc = %s\n", stc);
            for (int i = 0; i < len; i++)
            {
                temp[j] = stc[i];
                if (stc[i] >= 'a' && stc[i] <= 'z')
                {
                    j++;
                    // temp[j] = stc[i];
                    // printf("temp [%d] = %c\n", j, temp[j]);
                    if (stc[i + 1] == ' ' || i == len - 1)
                    {
                        // printf("temp : %s\n", temp);
                        strcpy(w_list[flag], temp);
                        // printf("w_list[%d] from temp = %s\n", flag, w_list[flag]);
                        for (int h = 0; h < T; h++)
                        {
                            if (strcmp(temp, d[h].sw) == 0)
                            {
                                // printf("\t%s\t%s\n", temp, d[h].sw);
                                strcpy(w_list[flag], d[h].ow);
                                // printf("w_list[%d] = %s\n", flag, w_list[flag]);
                            }
                        }

                        if (stc[i + 1] == ' ')
                        {
                            flag++;
                            memset(temp, 0, 101);
                            j = 0;
                        }
                        else if (i == len - 1)
                        {
                            memset(temp, 0, 101);
                            j = 0;
                        }
                    }
                }
                // else
                // {
                // j = 0;
                // memset(temp, 0, 101);
                // }
            }
            // printf("Flag ke-%d = %d\n", l, flag);
            printf("Case #%d:\n", l);
            for (int s = 1; s <= flag; s++)
            {
                if (s == flag)
                {
                    printf("%s\n", w_list[s]);
                }
                else
                {
                    printf("%s ", w_list[s]);
                }
            }
        }
    }

    fclose(fp);
    return 0;
}
