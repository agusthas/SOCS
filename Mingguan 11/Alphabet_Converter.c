#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ll long long int
#define gtc() getchar()

typedef struct
{
    char alphabet;
    ll x;
} data;

int cmpfunc(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int main()
{
    FILE *fp = fopen("testdata.in", "r");

    data v[101];
    int tc, N;
    char str[110];
    char temp, temp1;

    while (!feof(fp))
    {
        fscanf(fp, "%d\n", &tc);
        // printf("%d\n", tc);

        for (int l = 1; l <= tc; l++)
        {
            for (int o = 0; o < 101; o++)
            {
                v[o].alphabet = '0';
                v[o].x = 0;
            }
            int flag[101] = {0};
            fscanf(fp, "%[^\n]", str);
            // printf("%s\n", str);
            int len = strlen(str);

            /*  for (int i = 0; i < 26; i++)
            {
                if (v[i].x != 0)
                {
                    printf("%c %d\n", v[i].alphabet, v[i].x);
                }
            } */
            fscanf(fp, "%d\n", &N);
            // printf("%d\n", N);
            for (int i = 0; i < N; i++)
            {
                fscanf(fp, "%c %c\n", &temp, &temp1);
                // printf("%c %c\n", temp, temp1);

                flag[temp - 'A']++;
                // printf("%d\n", flag[temp - 'A']);
                if (flag[temp - 'A'] == 1)
                {
                    // printf("%d\n", flag[temp - 'A']);
                    for (int j = 0; j < len; j++)
                    {
                        if (temp == str[j])
                        {
                            // printf("%c == %c\n", temp, str[j]);
                            str[j] = temp1;
                        }
                    }
                }
            }
            // printf("%s\n", str);

            qsort(str, len, sizeof(char), cmpfunc);

            int idx = 0;
            for (int i = 0; i < len; i++)
            {
                v[idx].alphabet = str[i];
                v[idx].x++;
                if (str[i] != str[i + 1])
                {
                    idx++;
                }
            }

            for (int i = 0; i < idx; i++)
            {
                printf("%c %d\n", v[i].alphabet, v[i].x);
            }

            // for (int i = 0; i < len; i++)
            // {
            //     v[str[i] - 'A'].alphabet = str[i];
            //     v[str[i] - 'A'].x++;
            // }

            // for (int i = 0; i < 26; i++)
            // {
            //     if (v[i].x > 0)
            //     {
            //         printf("%c %d\n", v[i].alphabet, v[i].x);
            //     }
            // }
        }
    }
    fclose(fp);
    return 0;
}