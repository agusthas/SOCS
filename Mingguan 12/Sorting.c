#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

typedef struct {
  char nama[55];
  int num;
} data;

void swapStruct(data *a, data *b) {
  data temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int numComp(const void *a, const void *b) {
  data *x = (data *)a;
  data *y = (data *)b;

  if (x->num < y->num)
    return 1;
  else if (x->num == y->num)
    return 0;
  else
    return -1;
}

int main() {
  int tc;
  scanf("%d", &tc);

  // printf("tc = %d\n", tc);
  for (int l = 1; l <= tc; l++) {
    int N;
    scanf("%d", &N);
    data ppl[N + 5];
    for (int i = 0; i < N; i++) {
      gtc();
      scanf("%[^#]#%d", ppl[i].nama, &ppl[i].num);
    }
    qsort(ppl, N, sizeof(data), numComp);
    for (int i = 0; i < N; i++) {
      if (ppl[i].num == ppl[i + 1].num && i != N - 1) {
        if (strcmp(ppl[i].nama, ppl[i + 1].nama) > 0) {
          swapStruct(&ppl[i], &ppl[i + 1]);
        }
      }
    }
    printf("Case #%d:\n", l);
    for (int i = 0; i < N; i++) {
      printf("%s - %d\n", ppl[i].nama, ppl[i].num);
    }
  }
  return 0;
}