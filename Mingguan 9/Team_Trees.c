#include <stdio.h>
#define ll long long int
#define gtc() getchar()

long long int penjumlahan(ll list[], ll N){
	if(N == 0){
		return 0;
	}
	return penjumlahan(list, N - 1) + list[N - 1];
}

int main(){
 ll cas, N;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 ll list[1005];
 scanf("%lld", &N); gtc();
 for(int i = 0; i < N; i++){
 	scanf("%lld", &list[i]); // [1, 2, 3, 4, 4]
 }
 printf("Case #%d: %lld\n", l, penjumlahan(list, N));
 }
 return 0;
}
