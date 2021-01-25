#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll cas, a, b, mult, hasil;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 mult = 0;
 hasil = 1;
 scanf("%lld %lld", &a, &b);
 mult = a * b;
 
 for(int k = mult; mult > 0; mult--){
 	hasil *= 2;
 }
 printf("Case #%d: %lld\n", l, hasil);
 }
 
 return 0;
}
