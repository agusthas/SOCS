#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

struct employee
{
    char name[25];
    char sex[25];
    char div[25];
};

//tukar posisi
void swap(struct employee *emp, ll a, ll b)
{
    struct employee temp;
    temp = emp[a];
    emp[a] = emp[b];
    emp[b] = temp;
}

int main()
{
    int N, proc, a, b, c, d;
    int x[105] = {0};
    int y = 0;
    struct employee emp[105];
    char temp1[105][25];
    for (int i = 0; i < 101; i++)
    {
        strcpy(temp1[i], "free");
    }

    scanf("%d", &N);
    gtc();
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &proc);
        gtc();
        if (proc == 1)
        {
            for (int k = 1; k <= 100; k++)
            {
                if (strcmp(temp1[k], "free") == 0)
                {
                    scanf("%[^\n]s", emp[k].name);
                    gtc();
                    scanf("%[^\n]s", emp[k].sex);
                    gtc();
                    scanf("%[^\n]s", emp[k].div);
                    gtc();
                    strcpy(temp1[k], emp[k].name);
                    break;
                }
            }
        }
        else if (proc == 2)
        {

            scanf("%d %d", &a, &b);
            gtc();
            swap(emp, a, b);
        }
        else if (proc == 3)
        {
            scanf("%d", &c);
            gtc();
            strcpy(temp1[c], "free");
        }
        else if (proc == 4)
        {
            scanf("%d", &d);
            gtc();
            strcpy(temp1[d], "hur");
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (strcmp(temp1[i], "free") != 0 && strcmp(temp1[i], "hur") != 0)
        {
            printf("%s\n", emp[i].name);
        }
    }

    return 0;
}