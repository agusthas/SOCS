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
  char code[10];
  char name[50];
  ll money;
} data;

void swap(data *a, data *b) {
  data temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void solve() {
  FILE *fp;
  fp = fopen("testdata.in", "r");
  int n;
  fscanf(fp, "%d\n", &n);
  data pep[n + 5];
  for (int i = 0; i < n; i++) {
    fscanf(fp, "%[^,],%[^,],%lld\n", pep[i].code, pep[i].name, &pep[i].money);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(pep[j].code, pep[j + 1].code) > 0) {
        swap(&pep[j], &pep[j + 1]);
      }
    }
  }

  char q[5];
  fscanf(fp, "%s\n", q);
  ll count = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    if (strcmp(q, pep[i].code) == 0) {
      count++;
      sum += pep[i].money;
      printf("%s %s %lld\n", pep[i].code, pep[i].name, pep[i].money);
    }
  }

  printf("Total Recipients: %lld\n", count);
  printf("Total Amount: %lld\n", sum);

  fclose(fp);
}