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
  int id;
  char name[100];
  double height;
} data;

void swap(data* a, data* b) {
  data temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int compaH(const void* a, const void* b) {
  data* fa = (data*)a;
  data* fb = (data*)b;
  if (fa->height <= fb->height) {
    if (fa->height == fb->height) {
      return (fa->id > fb->id) - (fa->id < fb->id);
    } else {
      return 1;
    }
  } else {
    return -1;
  }
}

void solve() {
  int n;
  scanf("%d", &n);
  data people[n + 5];
  double temp1, temp2;
  for (int i = 0; i < n; i++) {
    getchar();
    scanf("%d,%[^,],%lf %lf", &people[i].id, people[i].name, &temp1, &temp2);
    people[i].height = (temp1 * 12 * 2.54) + (temp2 * 2.54);
  }

  qsort(people, n, sizeof(data), compaH);

  int q;
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    double key;
    scanf("%lf", &key);
    printf("Q%d:\n", i + 1);
    int flag = 0;
    for (int j = 0; j < n; j++) {
      if (people[j].height > key) {
        continue;
      } else if (people[j].height <= key) {
        flag = 1;
        printf("%d %s %.2lf\n", people[j].id, people[j].name, people[j].height);
      }
    }
    if (flag == 0) {
      printf("-1\n");
    }
  }
}