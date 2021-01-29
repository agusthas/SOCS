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
  char id[50];
  char time[8];
  char dest[500];
} data;

void solve() {
  int n;
  scanf("%d", &n);
  data trains[n + 2];
  for (int i = 0; i < n; i++) {
    getchar();
    scanf("%s %s", trains[i].id, trains[i].time);
  }

  for (int i = 0; i < n; i++) {
    char temp[150], temp1[1005];
    getchar();
    scanf("%[^ ] %[^\n]", temp, temp1);
    for (int j = 0; j < n; j++) {
      if (strcmp(temp, trains[j].id) == 0) {
        strcpy(trains[j].dest, temp1);
        break;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%s %s %s\n", trains[i].id, trains[i].time, trains[i].dest);
  }
}