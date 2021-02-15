// by: Jonathan Kristanto / 2440014010
#include <stdio.h>
#include <string.h>
typedef unsigned long long ull;
typedef long long ll;
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define nax 100005
#define MXL 1000000000000000000
#define PI 3.14159265
int main() {
  int t;
  scanf("%d", &t);
  int n;
  int idx, page;
  for (int tc = 1; tc <= t; tc++) {
    scanf("%d", &n);
    idx = n % 4 == 0 ? n / 4 : n / 4 + 1;
    page = 1;
    printf("Case #%d:\n", tc);
    for (int i = 0, j = 1, k = idx * 4; i < idx; i++, j += 2, k -= 2) {
      printf("Sheet %d, front: ", page);
      if (k <= n && k >= 1)
        printf("%d, ", k);
      else
        printf("Blank, ");
      if (j <= n && j >= 1)
        printf("%d\n", j);
      else
        printf("Blank\n");
      // printf("Sheet %d, front:",page);
      printf("Sheet %d, back: ", page);
      if (j + 1 <= n && j + 1 >= 1)
        printf("%d, ", j + 1);
      else
        printf("Blank, ");
      if (k - 1 <= n && k - 1 >= 1)
        printf("%d\n", k - 1);
      else
        printf("Blank\n");
      page++;
    }
  }
  return 0;
}