#include <stdio.h>
#define ll long long int
#define gtc() getchar()

struct item
{
    char id[15];
    char name[20];
    ll price;
};

int main()
{
    ll N;
    ll temp = 0;
    scanf("%lld", &N);
    gtc();
    struct item food[30001];
    for (int i = 0; i < N; i++)
    {
        scanf("%[^\n]s", food[i].id);
        gtc();
        scanf("%[^\n]s", food[i].name);
        gtc();
        scanf("%lld", &food[i].price);
        gtc();
    }

    temp = food[N / 2].price;

    for (int i = 0; i < N; i++)
    {
        if (food[i].price >= temp)
        {
            printf("%s %s\n", food[i].id, food[i].name);
        }
    }

    return 0;
}