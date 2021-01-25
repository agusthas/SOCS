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
    printf("Case #%d: ", i + 1);
    solve();
    i++;
  }
  return 0;
}

void bubbleSort(ll *arr, ll n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        ll temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
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

ll total(ll *arr, ll from, ll to) {
  ll sum = 0;
  for (ll i = from; i <= to; i++) {
    sum += arr[i];
  }
  return sum;
}

void solve() {
  ll N;
  scanf("%lld", &N);
  ll arr[N + 4];
  for (int i = 0; i < N; i++) {
    scanf("%lld", &arr[i]);
  }
  bubbleSort(arr, N);
  for (int i = 0; i < N; i++) {
    printf("%lld ", arr[i]);
  }
  ENDL;

  ll q;
  scanf("%lld", &q);
  for (int i = 0; i < q; i++) {
    ll l, r;
    scanf("%lld %lld", &l, &r);

    ll leftIDX = leftmost(arr, N, l);
    ll rightIDX = rightmost(arr, N, r);
    printf("\nl = %lld\tr =%lld\n", l, r);
    // printf("bin_L = %lld\tbin_R = %lld\n", leftIDX, rightIDX);
    // ENDL;
    if (l > r) {
      puts("L > R");
      printf("0\n");
    } else if (r > l) {
      if (l > arr[N - 1]) {
        puts("l too big");
        printf("0\n");
      } else if (r < arr[0]) {
        puts("r too small");
        printf("0\n");
      } else if (l < arr[0] && r >= arr[N - 1]) {
        puts("l is too small and right is too big");
        printf("%lld\n", total(arr, 0, N - 1));
      } else if (l >= arr[0] && r > arr[N - 1]) {
        puts("l is inside the range, but r is too big");
        printf("%lld\n", total(arr, leftIDX, N - 1));
      } else if (l < arr[0] && r <= arr[N - 1]) {
        puts("l is too small, but r is in range");
        printf("%lld\n", total(arr, 0, rightIDX));
      } else if (l >= arr[0] && r <= arr[N - 1]) {
        puts("both l and r is in range");
        printf("%lld\n", total(arr, leftIDX, rightIDX));
      } else {
        puts("l === r");
        printf("%lld\n", total(arr, leftIDX, rightIDX));
      }
    } else {
      puts("l === r");
      printf("%lld\n", total(arr, leftIDX, rightIDX));
    }
  }
  ENDL;
}