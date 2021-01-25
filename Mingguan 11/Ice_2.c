#include <stdio.h>
#define ll long long int

void make_sisiArray(ll *sisi, ll *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        sisi[i] = 2 + (arr[i] * 2);
    }
}

ll area(ll *arr, int n)
{
    ll sum_array = 0;
    for (int i = 0; i < n; i++)
    {
        sum_array += arr[i];
    }

    return sum_array * 4;
}

int main()
{
    FILE *fp;
    fp = fopen("testdata.in", "r");

    int T;
    int n_stack;
    while (!feof(fp))
    {
        fscanf(fp, "%d\n", &T);
        for (int l = 1; l <= T; l++)
        {
            // printf("l = %d\n", l);
            fscanf(fp, "%d\n", &n_stack);
            ll arr[10005] = {0};
            ll sisi[10005] = {0};
            ll ttl_sisi = 0;
            for (int i = 0; i < n_stack; i++)
            {
                if (i == n_stack - 1)
                {
                    fscanf(fp, "%lld\n", &arr[i]);
                }
                else
                {
                    fscanf(fp, "%lld ", &arr[i]);
                }
            }

            make_sisiArray(sisi, arr, n_stack);
            if (n_stack == 1)
            {
                printf("Case #%d: %lld %lld\n", l, sisi[0] * 2, area(arr, n_stack));
            }
            else
            {
                for (int i = 0; i < n_stack; i++)
                {
                    if (i == 0)
                    { //depan
                        if (sisi[i] < sisi[i + 1])
                        {
                            ttl_sisi += sisi[i] - arr[i];
                        }
                        else
                        {
                            ttl_sisi += sisi[i] - arr[i + 1];
                        }
                    }

                    if (i != 0 && i != n_stack - 1)
                    {
                        if (sisi[i - 1] < sisi[i])
                        {
                            if (sisi[i] < sisi[i + 1])
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i - 1];
                            }
                            else if (sisi[i] > sisi[i + 1])
                            {
                                ttl_sisi += sisi[i] - arr[i - 1] - arr[i + 1];
                            }
                            else
                            {
                                ttl_sisi += sisi[i] - arr[i - 1] - arr[i];
                            }
                        }
                        else if (sisi[i - 1] > sisi[i])
                        {
                            if (sisi[i] > sisi[i + 1])
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i + 1];
                            }
                            else if (sisi[i] < sisi[i + 1])
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i];
                            }
                            else
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i];
                            }
                        }
                        else
                        {
                            if (sisi[i] > sisi[i + 1])
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i + 1];
                            }
                            else if (sisi[i] < sisi[i + 1])
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i];
                            }
                            else
                            {
                                ttl_sisi += sisi[i] - arr[i] - arr[i];
                            }
                        }
                    }

                    if (i == n_stack - 1)
                    {
                        if (sisi[i] > sisi[i - 1])
                        {
                            ttl_sisi += sisi[i] - arr[i - 1];
                        }
                        else
                        {
                            ttl_sisi += sisi[i] - arr[i];
                        }
                    }
                }
                printf("Case #%d: %lld %lld\n", l, ttl_sisi * 2, area(arr, n_stack));
            }
        }
    }

    fclose(fp);
    return 0;
}