#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	long long a, b, c, d, e, f, g, h, i, j , k, l;
	
//long long = long long int, maka pake %lld
 scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);
 getchar();
 scanf("(%lld+%lld)x(%lld-%lld)", &e, &f, &g, &h);
 getchar();
 scanf("(%lld+%lld)x(%lld-%ldl)", &i, &j, &k, &l);
 getchar();

 long long x = (a+b) * (c-d);
 long long y = (e+f) * (g-h);
 long long z = (i+j) * (k-l);
 
 
 printf("%lld ", x);
 printf("%lld ", y);
 printf("%lld\n", z);
 return 0;
}
