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

typedef struct {
  char accNumber[10];
  char name[50];
  int age;
  double balance;
} data;

int binser(data *arr, int left, int right, char *key) {
  int l = left, r = right, mid;
  while (l <= r) {
    mid = l + (r - l) / 2;
    if (strcmp(arr[mid].accNumber, key) == 0) {
      return mid;
    } else if (strcmp(arr[mid].accNumber, key) < 0) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  return -1;
}

void solve() {
  int n;
  scanf("%d", &n);
  data pep[n + 5];
  for (int i = 0; i < n; i++) {
    getchar();
    scanf("%[^,],%[^,],%d,%lf", pep[i].accNumber, pep[i].name, &pep[i].age,
          &pep[i].balance);
  }

  int q;
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    char temp[50];
    scanf("%s", temp);
    int idx = binser(pep, 0, n, temp);
    if (idx == -1) {
      printf("%d\n", -1);
    } else {
      printf("%s %d %.2lf\n", pep[idx].name, pep[idx].age, pep[idx].balance);
    }
  }
}