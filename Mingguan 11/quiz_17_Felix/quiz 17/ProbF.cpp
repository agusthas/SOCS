#include <stdio.h>
#include <string.h>
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    FILE *data;
    data = fopen("D:\\projects\\C and C++ Language\\Mingguan 11\\testdata.in", "r");
    int t;
    fscanf(data, "%d\n", &t);
    int n, len, lena, premax, sufmax;
    int flag;
    for (int i = 1; i <= t; i++)
    {
        // printf("\ttc = %d\n", i);
        fscanf(data, "%d", &n);
        premax = 9999;
        sufmax = 9999;
        char str[n][1005];
        for (int j = 0; j < n; j++)
        {
            fscanf(data, "%s", str[j]);
            len = strlen(str[j]);
            str[j][len] = '\0';
            if (j == 0)
                lena = len;
            else
            {
                //prefix
                flag = 1;
                for (int k = 0; k < len && k < lena; k++)
                {
                    if (str[j][k] != str[0][k])
                    {
                        if (k < premax)
                        {
                            premax = k;
                        }
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    if (min(lena, len) < premax)
                        premax = min(lena, len);
                }

                flag = 1;
                for (int l = lena - 1, k = len - 1; l >= 0 && k >= 0; l--, k--)
                {
                    if (str[j][k] != str[0][l])
                    {
                        if (lena - l - 1 < sufmax)
                        {
                            sufmax = lena - l - 1;
                            // printf("%d\n", sufmax);
                        }
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    if (min(lena, len) < sufmax)
                        sufmax = min(lena, len);
                }
            }
        }
        // printf("%d\n", sufmax);
        // printf("lena = %d\n", lena);
        printf("Case #%d: ", i);
        for (int i = 0; i < premax; i++)
        {
            printf("%c", str[0][i]);
        }
        for (int i = lena - sufmax; i < lena; i++)
        {
            printf("%c", str[0][i]);
        }
        printf("\n");
    }
    return 0;
}
