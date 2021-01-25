#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll cas;
 ll N;
 scanf("%lld", &cas); gtc();
 
 for(int q = 1; q <= cas; q++){
 	scanf("%lld", &N);
 	printf("Case #%d:\n", q);
 	for(int i = 0; i < N; i++){
 		if(N % 2 == 0){
 			printf("%*s", N-i, "#");
		 }
		else{
			printf("%*s", N-i, "*");
		}
 		for(int j = 0; j < i; j++){
 			if(N % 2 == 0){
 				if(j % 2 == 0){
 					printf("*");
				 }
				else{
					printf("#");
				}
			 }
			else{
				if(j % 2 == 0){
					printf("#");
				}
				else{
					printf("*");
				}
			}
			
		}
	 puts("");
	 }
 }
 
 return 0;
}

