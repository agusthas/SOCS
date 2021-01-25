#include <stdio.h>

int main(){
 int cas;
 long long int box,a,max,min,sum;
 scanf("%d", &cas);
 
 for(int i = 1; i <= cas ; i++){
 	scanf("%lld", &box);
 	max = 1000000, min = -1000000;
 	for(int j = 1; j <= box; j++){
 		scanf("%lld", &a);
 		if(a >= min){
 			max = min;
 			min = a;
		 }
		else if(a >= max){
			max = a;
		}
	}
	sum = min+max;
	printf("Case #%d: %lld\n", i, sum);
 }
 return 0;
}
