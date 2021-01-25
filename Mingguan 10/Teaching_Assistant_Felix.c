#include <stdio.h>

struct data
{
    char nama[20];
    int group;
};

int main()
{
    int t, n;
    scanf("%d", &t);
    getchar();
    struct data datagrup[201];
    for (int i = 0; i < t; i++) // loop testcase
    {
        int count[21] = {0};
        scanf("%d", &n);
        {
            for (int j = 0; j < n; j++) // loop scan
            {
                scanf("%s %d", datagrup[j].nama, &datagrup[j].group);
                getchar();
                count[datagrup[j].group]++;

                //printf("%d\n", count[datagrup[j].group]);
            }
        }
        printf("Case #%d:\n", i + 1);
        for (int j = 0; j <= 20; j++)
        {
            if (count[j] != 0)
            {
                printf("Group %d(%d):\n", j, count[j]);
                for (int x = 0; x < n; x++)
                {
                    if (datagrup[x].group == j)
                    {
                        printf("%s\n", datagrup[x].nama);
                    }
                }
            }
        }
    }
    return 0;
}