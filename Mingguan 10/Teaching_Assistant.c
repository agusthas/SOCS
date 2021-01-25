#include <stdio.h>
#define ll long long int
#define gtc() getchar()

struct group
{
    char name[12];
    int groupnum;
};

int main()
{
    ll cas;
    int members;
    scanf("%d", &cas);
    gtc();
    struct group ppl[205];

    for (int l = 1; l <= cas; l++)
    {
        int flag[205] = {0};
        scanf("%d", &members);
        gtc();
        for (int x = 0; x < members; x++)
        {
            scanf("%s %d", ppl[x].name, &ppl[x].groupnum);
            gtc();
        }

        for (int i = 0; i < members; i++)
        {
            if (flag[ppl[i].groupnum] > 1)
            {
                continue;
            }
            flag[ppl[i].groupnum]++;
            for (int j = i + 1; j < members; j++)
            {
                if (ppl[i].groupnum == ppl[j].groupnum)
                {
                    flag[ppl[i].groupnum]++;
                }
            }
        }

        /*
        for (int i = 1; i <= 5; i++)
        {
            printf("Flag[%d] = %d\n", i, flag[i]);
        }
        */

        printf("Case #%d:\n", l);
        for (int p = 0; p <= 20; p++)
        {
            if (flag[p] == 0)
            {
                continue;
            }

            if (flag[p] != 0)
            {
                printf("Group %d(%d):\n", p, flag[p]);
                for (int k = 0; k < members; k++)
                {
                    if (ppl[k].groupnum == p)
                    {
                        printf("%s\n", ppl[k].name);
                    }
                }
            }
        }
    }
    return 0;
}
