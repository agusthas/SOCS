#include <stdio.h>
#define ll long long int
#define gtc() getchar()

ll temp;

int itung(ll x, ll lim){
	ll a = 3;
    ll b = 4;
    ll c = 5;
    if(x > temp){
    	temp = x;
	}
	if(x * a <= lim){
		itung(x * a, lim);
	}
	if(x * b <= lim){
		itung(x * b, lim);
	}
	if(x * c <= lim){
		itung(x * c, lim);
	}
	
	return temp;
}
int main(){
 ll cas, x, lim;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
    scanf("%lld %lld", &x, &lim); gtc();
    temp = 0;
    printf("Case #%d: %lld\n", l, itung(x, lim)); 
 }
 return 0;
}
