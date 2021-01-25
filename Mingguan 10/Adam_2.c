#include <stdio.h>

struct s
{
    char nama[20];
    int group;
} data[205];

int main()
{

    long long int a, b;
    scanf("%lld", &b);
    for (int i = 0; i < b; i++)
    {
        scanf("%lld", &a);
        getchar();
        int gc[205] = {0}; //pindahin int gc[205] kesini
        for (int j = 0; j < a; j++)
        {
            scanf("%s %d", data[j].nama, &data[j].group); //tambahin & didepan data[j].group
            getchar();
            gc[data[j].group]++;
        }
        printf("Case #%d:\n", i + 1);
        for (int j = 1; j < 201; j++)
        {
            if (gc[j] != 0)
            {
                printf("Group %d(%d):\n", j, gc[j]);
                for (int k = 0; k < a; k++)
                {
                    if (data[k].group == j)
                    {
                        printf("%s\n", data[k].nama);
                    }
                }
            }
        }
    }

    return 0;
}
