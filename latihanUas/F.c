#include <assert.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long int ll;
#define GEDE 2000000007
#define ENDL printf("\n")
#define MAX(a, b) (a < b ? b : a)
#define MIN(a, b) ((a > b) ? b : a)
#define ABS(a, b) ((a - b) > 0 ? (a - b) : -(a - b))
#define COMPARE(a, b) (((a) > (b)) - ((a) < (b)))

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

ll binser(ll arr[], ll left, ll right, ll element, ll key) {
  ll l = left, r = right, mid, ans = -1;
  while (l <= r) {
    mid = l + (r - l) / 2;
    if ((element + arr[mid]) <= key) {
      ans = element + arr[mid];
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  return ans;
}

void solve() {
  ll n, k;
  scanf("%lld %lld", &n, &k);
  ll arr[n + 10];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }

  ll max = -1;
  for (int i = 0; i < n - 1; i++) {
    ll element = arr[i];
    // biner right most
    ll temp = binser(arr, i + 1, n - 1, element, k);
    max = MAX(max, temp);
  }

  printf("%lld\n", max);
}