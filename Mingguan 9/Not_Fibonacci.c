#include <stdio.h>
#define ll long long int
#define gtc() getchar()

long long int f1, f2;

long long int notfib(long long int n){
	ll temp;
	if(n == 0){
		return f1;
	}
	for(int i = 2; i <= n; i++){
		temp = f1 + f2;
		f1 = f2;
		f2 = temp;
	}
	return f2;
}

int main(){
 ll n;
 scanf("%lld %lld", &f1, &f2); gtc();
 scanf("%lld", &n); gtc();
 printf("%lld\n", notfib(n));
 return 0;
}

