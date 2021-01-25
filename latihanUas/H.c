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

void prarr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  ENDL;
}

// TODO:
void solve() {
  int n;
  scanf("%d", &n);
  int shuffled[n + 2];
  int original[n + 2];
  for (int i = 0; i < n; i++) {
    scanf("%d", &shuffled[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &original[i]);
  }

  // for (int i = 0; i < n - 1; i++) {
  //   for (int j = i + 1; j < n; j++) {
  //     if (original[i] > original[j]) {
  //       int temp = original[j];
  //       original[j] = original[i];
  //       original[i] = temp;
  //     }
  //   }
  //   prarr(original, n);
  // }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (original[j] > original[j + 1]) {
        int temp = original[j];
        original[j] = original[j + 1];
        original[j + 1] = temp;
      }
    }
    prarr(original, n);
  }
}