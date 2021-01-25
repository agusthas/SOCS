#include <stdio.h>
#define ll long long int
#define gtc() getchar()

struct course
{
    char code[9];
    char day[20];
    int time;
};

int main()
{
    ll N, query;
    ll arr_query[1001];
    scanf("%lld", &N);
    gtc();
    struct course a[N + 1];
    for (int i = 1; i <= N; i++)
    {
        scanf("%[^\n]s", a[i].code);
        gtc();
        scanf("%[^\n]s", a[i].day);
        gtc();
        scanf("%d", &a[i].time);
        gtc();
    }

    scanf("%lld", &query);
    for (int i = 1; i <= N; i++)
    {
        scanf("%lld", &arr_query[i]);
        gtc();
    }

    for (int i = 1; i <= query; i++)
    {
        printf("Query #%d:\n", i);
        printf("Code: %s\n", a[arr_query[i]].code);
        printf("Day: %s\n", a[arr_query[i]].day);
        printf("Time: %02d:00\n", a[arr_query[i]].time);
    }

    return 0;
}