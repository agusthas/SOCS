#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll N;
 ll x;
 ll arr[10001];
 scanf("%lld", &N);
 for(int i = 1; i <= N; i++){
 	scanf("%lld", &arr[i]);
 }
 for(int i = 1; i <= N; i++){
 	if(arr[i] >= 1){
 		for(int j = 1; j <= 9; j++){
 			while(j <= arr[i]){
 				printf("#");
 				j++;
			}
			if(j > 9){
				break;
			}
			else{
			printf(".");
			}
		 }
	 }
	else{
		for(int j = 1; j <= 9; j++){
			printf(".");
		}
	}
 	puts("");
 }
 return 0;
}

