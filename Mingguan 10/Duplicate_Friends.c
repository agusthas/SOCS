/**
 * C program to count total number of duplicate elements in an array
 */

#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int main()
{
    char list_string[1005][105];
    ll N;
    ll count = 0;
    ll check;
    scanf("%lld", &N);
    gtc();

    for (int i = 0; i < N; i++)
    {
        scanf("%[^\n]", list_string[i]);
        gtc();
    }

    for (int i = 0; i < N; i++)
    {
        check = 0;
        for (int j = i + 1; j < N; j++)
        {
            if (strcmp(list_string[i], list_string[j]) == 0) // 0,7 == 0 ; 0,8 == 0
            {
                check++;
                // printf("i = %d, j = %d\n", i, j);
                // printf("Check = %lld\n", check);
            }
        }
        if (check == 1)
        {
            count++;
            // printf("Count = %lld\n", count);
        }
    }

    printf("You have %lld duplicate name(s).\n", count);
    return 0;
}