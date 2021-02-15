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
  scanf("%d", &t);
  int i = 0;
  while (i < t) {
    printf("Case #%d: ", i + 1);
    solve();
    i++;
  }
  return 0;
}

void solve() {
  // FIXME:
  int n;
  scanf("%d", &n);
  int rem = n % 4;
  int hold;
  if (rem == 0) {
    hold = n;
  } else {
    hold = n + 4 - rem;
  }

  int div2 = hold / 2;
  int col1 = 1;
  int col2 = div2 - 1;
  // template
  int arr[100][100];
  int temp1 = hold, temp2 = hold;
  for (int i = 0; i < div2 + 1; i++) {
    if (i % 2 == 0) {
      temp1 = temp1 - i;
      col1 = col1 + i;
      for (int j = 0; j < 2; j++) {
        if (j % 2 == 0) {
          arr[i][j] = temp1;
        } else {
          arr[i][j] = col1;
        }
      }
    } else {
      temp2 = temp2 - 2;
      int aTemp = div2 - (temp2);
      col2;
    }
  }
}