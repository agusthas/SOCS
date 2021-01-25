#include <stdio.h>

int main(){
	int a, b, c, d, e, f, g, h, i;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 getchar();
 
 e = b + c - d;
 g = a + b - d;
 i = a + c - e;
 f = a + c - g;
 h = a + b - i;
 
 printf("%d %d %d\n", a, e, d);
 printf("%d %d %d\n", f, b, g);
 printf("%d %d %d\n", h, i, c);
 
 return 0; 
}
