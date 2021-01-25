#include <stdio.h>
#define ll long long int
#define gtc() getchar()

ll pangkat(int N){
	ll hasil = 1;
	for(int i = 1; i <= N; i++){
		hasil = hasil * 2;
	}
	return hasil;
}

int main(){
 ll cas;
 ll a, b, c, sum;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 scanf("%lld %lld", &a, &b);
 sum = 0;
 for(int i = a; i <= b; i++){
 	c = pangkat(i-1);
 	sum = sum + c;
 }
 printf("Case #%d: %lld\n", l, sum); 
 }
 return 0;
}
