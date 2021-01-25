#include <stdio.h>

int main(){
 double l,b,h;
 scanf("%lf %lf %lf", &l, &b ,&h);
 double a = (b*h) + (3*l*b);
 printf("%.3lf\n", a);
 return 0;
}
