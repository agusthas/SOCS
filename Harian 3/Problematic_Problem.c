#include <stdio.h>

int main(){
 long long a, b, c;
 scanf("%lld %lld %lld", &a, &b , &c);
 
 long long d = (a * b) + c;
 
 long long e = (d % 100) / 10;
 
 printf("%lld\n", e);
 return 0;
}
