#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll a, b, c, d;
 scanf("%lld %lld %lld %lld", &a, &b, &c, &d); gtc();
 
 // a x b
 ll e = a * b;
 
 // c - d
 ll f = c - d;
 
 if(e == f){
 	printf("True\n");
 }
 else{
 	printf("False\n");
 }
 
 return 0;
}

