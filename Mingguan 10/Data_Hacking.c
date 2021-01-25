#include <stdio.h>
#define ll long long int
#define gtc() getchar()

struct data
{
    ll sal1;
    ll sal2;
    ll sal3;
};

//reverse vertical function
void reverse_vertically(struct data *dt, ll u, ll v)
{
    struct data temp;
    ll x, y;
    for (x = v, y = u; x > y; x--)
    {
        temp = dt[x];
        dt[x] = dt[y];
        dt[y] = temp;
        y++;
    }
}

//left shift function
void left_shift(struct data *dt, ll u, ll v)
{
    ll x, y;
    ll temp;
    ll temp1;
    y = v;
    for (x = u; x <= y; x++)
    {
        //swap 1st and 3rd
        temp = dt[x].sal1;
        dt[x].sal1 = dt[x].sal3;
        dt[x].sal3 = temp;

        //swap 2nd and 3rd
        temp1 = dt[x].sal2;
        dt[x].sal2 = dt[x].sal3;
        dt[x].sal3 = temp1;
    }
}

int main()
{
    ll cas, N, xorder;
    ll u, v;
    scanf("%lld", &cas);
    gtc();

    for (int l = 1; l <= cas; l++)
    {
        scanf("%d %d", &N, &xorder);
        gtc();
        int num[xorder + 1];
        ll u[xorder + 1], v[xorder + 1];
        struct data dt[N + 1];
        char name[N + 1][26];
        for (int i = 1; i <= N; i++)
        {
            scanf("%s", name[i]);
            scanf("%lld %lld %lld", &dt[i].sal1, &dt[i].sal2, &dt[i].sal3);
            gtc();
        }

        for (int j = 1; j <= xorder; j++)
        {
            scanf("%d %lld %lld", &num[j], &u[j], &v[j]);
            gtc();
        }

        for (int j = xorder; j > 0; j--)
        {
            switch (num[j])
            {
            case 1:
                reverse_vertically(dt, u[j], v[j]);
                // for (int i = 1; i <= N; i++)
                // {
                //     printf("%s %lld %lld %lld\n", name[i], dt[i].sal1, dt[i].sal2, dt[i].sal3);
                // }
                break;

            case 2:
                left_shift(dt, u[j], v[j]);
                // for (int i = 1; i <= N; i++)
                // {
                //     printf("%s %lld %lld %lld\n", name[i], dt[i].sal1, dt[i].sal2, dt[i].sal3);
                // }
                break;
            }
            // puts("");
        }

        printf("Case #%d:\n", l);
        for (int k = 1; k <= N; k++)
        {
            printf("%s %lld\n", name[k], dt[k].sal3);
        }
    }
    return 0;
}