#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()
struct data
{
    char name[105];
    int date;
    int month;
    int cake;
};

struct store
{
    int date1;
    int month1;
};

int main()
{
    ll cas;
    int n, m, q;
    int flag;
    struct data ppl[1001];
    struct store sto[1001];
    scanf("%lld", &cas);
    gtc();

    for (int l = 1; l <= cas; l++)
    {
        scanf("%d %d", &n, &m);
        gtc();
        for (int i = 1; i <= n; i++)
        {
            scanf("%s %d/%d %d", ppl[i].name, &ppl[i].date, &ppl[i].month, &ppl[i].cake);
            gtc();
        }

        scanf("%d", &q);
        gtc();

        for (int i = 1; i <= q; i++)
        {
            scanf("%d/%d", &sto[i].date1, &sto[i].month1);
        }

        printf("Case #%lld:\n", l);
        for (int i = 1; i <= q; i++)
        {
            flag = 0;
            for (int j = 1; j <= n; j++)
            {
                if (ppl[j].date == sto[i].date1 && ppl[j].month == sto[i].month1 && ppl[j].cake >= m)
                {
                    printf("%s\n", ppl[j].name);
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                printf("No one\n");
            }
        }
    }
    return 0;
}