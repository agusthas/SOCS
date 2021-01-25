#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll a, b;
 ll matr[105][105];
 ll sum[255] = {0};
 ll mult = 1;
 
 scanf("%lld %lld", &a, &b); gtc();

//scan isi matrix
 for(int i = 1; i <= a; i++){
 	for(int j = 1; j <= b; j++){
 		scanf("%lld", &matr[i][j]);
	 }
 }

//penjumlahan tiap kolom 
 for(int i = 1; i <= a; i++){
 	for(int j = 1; j <= b; j++){
 		sum[j] = (sum[j] + matr[i][j]) % 1000000007;
// 		printf("Sum[%d] : %lld\n", j, sum[j]);
	 }
 }
 
//perkalian tiap sum kolom 
 for(int k = 1; k <= b; k++){
 	mult = (mult * sum[k]) % 1000000007;
// 	printf("Mult: %lld\n", mult);
 }
 
 printf("%lld\n", mult);
 return 0;
 
}

