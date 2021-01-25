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

ll leftmost(ll *arr, ll n, ll key) {
  ll l = 0, r = n - 1, res = -1;
  while (l <= r) {
    ll mid = l + (r - l) / 2;
    if (arr[mid] > key) {
      r = mid - 1;
    } else if (arr[mid] < key) {
      l = mid + 1;
    } else {
      res = mid;
      r = mid - 1;
    }
  }

  return res;
}

ll rightmost(ll *arr, ll n, ll key) {
  ll l = 0, r = n - 1, res = -1;
  while (l <= r) {
    ll mid = l + (r - l) / 2;
    if (arr[mid] > key) {
      r = mid - 1;
    } else if (arr[mid] < key) {
      l = mid + 1;
    } else {
      res = mid;
      l = mid + 1;
    }
  }

  return res;
}

void solve() {
  ll N, Q;
  scanf("%lld %lld", &N, &Q);

  ll arr[N + 5];
  for (ll i = 0; i < N; i++) {
    scanf("%lld", &arr[i]);
  }

  ll query;
  for (int i = 0; i < Q; i++) {
    scanf("%lld", &query);
    ll left = leftmost(arr, N, query);
    ll right = rightmost(arr, N, query);

    if (left == -1 || right == -1) {
      printf("0\n");
    } else {
      ll total = (right - left) + 1;
      printf("%lld\n", total);
    }
  }
}