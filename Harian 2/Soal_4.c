#include <stdio.h>

int main(){
 unsigned long long int a, b, c;
 scanf("%llu %llu", &a, &b);
  c = a;
  a = b;
  b = c;
  
  printf("%llu %llu\n", a, b);
 return 0;
}
