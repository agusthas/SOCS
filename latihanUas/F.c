#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long int ll;
#define GEDE 2000000007
#define ENDL printf("\n")
#define getMax(a, b) (a < b ? b : a)
#define getMin(a, b) ((a > b) ? b : a)
#define getAbs(a, b) ((a - b) > 0 ? (a - b) : -(a - b))

void solve();

int main() {
  int t = 1;
  /* testcase exist */
  // scanf("%d", &t);
  int i = 0;
  while (i < t) {
    // printf("Case #%d: ", i + 1);
    solve();
    i++;
  }
  return 0;
}

// TODO: BELUM
void solve() {
  ll n, m;
  scanf("%lld %lld", &n, &m);
  ll arr[n + 5];
  for (ll i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }

  ll max = -1;
  for (ll i = 0; i < n - 1; i++) {
    for (ll j = i + 1; j < n; j++) {
      ll sum = arr[i] + arr[j];
      if (m > sum) {
        max = sum;
      }
    }
  }

  printf("%lld\n", max);
}