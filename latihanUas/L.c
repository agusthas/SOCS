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
  scanf("%d", &t);
  int i = 0;
  while (i < t) {
    printf("Case #%d:\n", i + 1);
    solve();
    i++;
  }
  return 0;
}

void solve() {
  ll N, Q;
  scanf("%lld", &N);
  ll arr[N + 4];
  for (int i = 0; i < N; i++) {
    scanf("%lld", &arr[i]);
  }

  scanf("%lld", &Q);
  for (int i = 0; i < Q; i++) {
    ll l, r;
    scanf("%lld %lld", &l, &r);
    ll total = 0;
    for (int j = 0; j < N; j++) {
      if (arr[j] >= l && arr[j] <= r) {
        total += arr[j];
      }
    }
    printf("%lld\n", total);
  }
}