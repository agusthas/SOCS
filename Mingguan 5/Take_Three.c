#include <stdio.h>

int main(){
 long long int cas, bola, a;
 long long int mult;
 long long int temp;
 long long int sum;
 
 scanf("%lld", &cas); getchar();
 
 for(int k = 1; k <= cas; k++){  
	sum = 0;
	int banyak[1002] = {0}; 
 	scanf("%lld", &bola);
 	for(int i = 0; i < bola; i++){
 		scanf("%lld", &a);
 		++banyak[a - 1];
	}
	for(int i = 0; i < 1000; i++){
		mult = 1;
		if(banyak[i] >= 3){
			for(int j = banyak[i]; j > banyak[i] - 3; j--){ // 5 ; 5 > 2; 3--
				mult *= j; // 3*2*1
			}
			temp = mult / 6;
			sum += temp;	
		}
	}
	printf("Case #%lld: %lld\n", k, sum);
 }
 
 
 return 0;
}
