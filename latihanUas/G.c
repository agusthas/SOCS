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

typedef struct {
  ll num;
  ll total;
} data;

void swapStruct(data *a, data *b) {
  data temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

ll sumOfDivisor(ll n) {
  ll sum = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  return sum;
}

void solve() {
  int n;
  scanf("%d", &n);
  data number[n + 3];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &number[i].num);
    number[i].total = sumOfDivisor(number[i].num);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (number[i].total > number[j].total) {
        swapStruct(&number[i], &number[j]);
      }
    }
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (number[i].total == number[j].total) {
        if (number[i].num > number[j].num) {
          swapStruct(&number[i], &number[j]);
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (i != n - 1) {
      printf("%lld ", number[i].num);
    } else {
      printf("%lld\n", number[i].num);
    }
  }
}