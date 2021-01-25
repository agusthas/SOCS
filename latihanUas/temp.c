#include <stdio.h>
#include <string.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
}

int main() {
  int testcase, n;
  scanf("%d", &testcase);
  for (int i = 0; i < testcase; i++) {
    scanf("%d", &n);

    int query[n + 1];
    int q;
    int l, r;
    for (int j = 0; j < n; j++) {
      scanf("%d", &query[j]);
    }
    bubbleSort(query, n);

    scanf("%d", &q);

    printf("Case #%d\n", i + 1);

    for (int k = 0; k < q; k++) {
      scanf("%d %d", &l, &r);

      printf("nilai l : %d\n", l);
      printf("nilai r : %d\n", r);

      int answer = 0;  // reset
      for (int x = l; x <= r; x++) {
        answer = answer + query[x];
      }
      printf("%d\n", answer);
    }
  }
  return 0;
}