#include <stdio.h>

int main(){
	int n,cas;
	long long int cave[5000];
	
	scanf("%d", &cas);
	for(int k = 1; k <= cas; k++){ //looping buat banyak case
	
	long long int temp = 0;
	long long int sumtemp = 0;

	scanf("%d", &n);
 		for(int i = 1; i <= n; i++){ //looping isi nya array
 			scanf("%lld", &cave[i]);
 		}
 		for(int i = 1; i <= n; i++){ //looping nyari nilai terkecil
 			sumtemp += cave[i];
 			printf("%lld_\n", sumtemp);
 			if(sumtemp <= temp){
 			temp = sumtemp;
	 		}
	 	}
 	printf("Case #%d: %lld\n", k, temp * -1 + 1);
	}
 return 0;
}
