#include <stdio.h>
#define ll long long int
#define gtc() getchar()

struct Student
{
    int date;
    int month;
    int year;
    char name[15];
    char ad[15];
};

int main()
{
    struct Student mhs[105] = {{0}};
    int n; // number of students
    int x;
    int num;
    int query;
    scanf("%d", &n);
    gtc();

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        scanf("%d", &mhs[x].date);
        gtc();
        scanf("%d", &mhs[x].month);
        gtc();
        scanf("%d", &mhs[x].year);
        gtc();
        scanf("%s", mhs[x].name);
        gtc();
        scanf("%s", mhs[x].ad);
        gtc();
    }

    scanf("%d", &query);
    gtc();

    for (int j = 1; j <= query; j++)
    {
        scanf("%d", &num);
        if (mhs[num].date != 0)
            printf("%d. %s was born on %d/%d/%d and live at %s\n", num, mhs[num].name, mhs[num].date, mhs[num].month, mhs[num].year, mhs[num].ad);
        else
            printf("No data found!\n");
    }

    return 0;
}