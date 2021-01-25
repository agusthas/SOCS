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
  char desc[1000];
  int r;
} data;

int cmp(const void *a, const void *b) {
  data *x = (data *)a;
  data *y = (data *)b;

  return x->r > y->r ? 1 : -1;
}

void solve() {
  int N;
  scanf("%d", &N);
  data lecturer[N + 1];
  for (int i = 0; i < N; i++) {
    getchar();
    scanf("%[^ ] %d", lecturer[i].desc, &lecturer[i].r);
  }

  qsort(lecturer, N, sizeof(data), cmp);

  for (int i = 0; i < N; i++) {
    printf("Lecturer #%d: %s\n", i + 1, lecturer[i].desc);
  }
}