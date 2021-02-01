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

ll binser(ll *arr, ll current, ll l, ll r, ll key, ll len) {
  while (l <= r) {
    ll mid = l + (r - l) / 2;
    if (arr[mid] + current <= key && arr[mid + 1] + current > key &&
        mid != len - 1) {
      return mid;
    } else if (arr[mid] + current <= key && mid == len - 1) {
      return mid;
    } else if (arr[mid] + current <= key && arr[mid + 1] + current <= key &&
               mid != len - 1) {
      l = mid + 1;
    } else if (arr[mid] + current > key) {
      r = mid - 1;
    }
  }

  return -1;
}

void solve() {
  ll n, k;
  scanf("%lld %lld", &n, &k);
  ll arr[n + 5];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }

  ll max = -1;
  for (int i = 0; i < n; i++) {
    ll bin = binser(arr, arr[i], 0, n - 1, k, n);
    if (bin >= 0 && bin != i) {
      if (max < arr[bin] + arr[i]) {
        max = arr[bin] + arr[i];
      }
    }
  }

  printf("%lld\n", max);
}