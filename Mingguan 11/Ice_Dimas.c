#include <stdio.h>
#include <string.h>
#define ll long long

int main()
{
    FILE *fp = fopen("testdata.in", "r");
    ll n, m;

    fscanf(fp, "%lld\n", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%lld\n", &m);
        ll arr[10005] = {0}, perim = 0, temp_arr[10005] = {0}, area = 0;
        for (int j = 0; j < m; j++)
        {
            fscanf(fp, "%lld", &arr[j]);
            temp_arr[j] = 2 + (arr[j] * 2);
            area += arr[j];
        }
        if (m == 1)
        {
            perim = temp_arr[0];
        }
        else
        {
            perim = arr[0] < arr[1] ? temp_arr[0] - arr[0] : temp_arr[0] - arr[1];
            for (int j = 1; j < m - 1; j++)
            {
                // condition ? valueIfTrue : valueIfFalse
                perim += arr[j] < arr[j - 1] ? temp_arr[j] - arr[j] : temp_arr[j] - arr[j - 1];
                perim -= arr[j] < arr[j + 1] ? arr[j] : arr[j + 1];
            }
            perim += arr[m - 1] < arr[m - 2] ? temp_arr[m - 1] - arr[m - 1] : temp_arr[m - 1] - arr[m - 2];
        }
        printf("Case #%d: %lld %lld\n", i + 1, perim * 2, area * 4);
    }

    return 0;
}