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

int myCompa(const void *a, const void *b) {
  if (*(const long long int *)a < *(const long long int *)b) return -1;
  return *(const long long int *)a > *(const long long int *)b;
}

ll leftmost(ll *arr, ll n, ll key) {
  ll l = 0, r = n - 1, res = -1;
  while (l <= r) {
    ll mid = l + (r - l) / 2;
    if (arr[mid] >= key) {
      res = mid;
      r = mid - 1;
    } else if (arr[mid] < key) {
      l = mid + 1;
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
    } else if (arr[mid] <= key) {
      res = mid;
      l = mid + 1;
    }
  }

  return res;
}

void solve() {
  ll N;
  scanf("%lld", &N);
  ll arr[N + 4];
  for (int i = 0; i < N; i++) {
    scanf("%lld", &arr[i]);
  }
  qsort(arr, N, sizeof(long long int), myCompa);

  ll q;
  scanf("%lld", &q);
  for (int i = 0; i < q; i++) {
    ll l, r;
    scanf("%lld %lld", &l, &r);

    ll sum = 0;
    if (l > r) {
      printf("0\n");
    } else {
      if (l > arr[N - 1] || r < arr[0]) {
        printf("0\n");
      } else if (l < arr[0] && r > arr[N - 1]) {
        for (ll j = 0; j < N; j++) {
          sum += arr[j];
        }
        printf("%lld\n", sum);
      } else if (l < arr[0] && (r >= arr[0] && r <= arr[N - 1])) {
        ll right = rightmost(arr, N, r);
        for (ll j = 0; j <= right; j++) {
          sum += arr[j];
        }
        printf("%lld\n", sum);
      } else if ((l >= arr[0] && l <= arr[N - 1]) && r > arr[N - 1]) {
        ll left = leftmost(arr, N, l);
        for (ll j = left; j < N; j++) {
          sum += arr[j];
        }
        printf("%lld\n", sum);
      } else if ((l >= arr[0] && l <= arr[N - 1]) &&
                 (r >= arr[0] && r <= arr[N - 1])) {
        ll left = leftmost(arr, N, l);
        ll right = rightmost(arr, N, r);
        for (ll j = left; j <= right; j++) {
          sum += arr[j];
        }
        printf("%lld\n", sum);
      }
    }
  }
}
