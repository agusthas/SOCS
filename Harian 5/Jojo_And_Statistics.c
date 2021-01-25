#include <stdio.h>

int main(){
 long long int cas;
 long long int N;
 long long int max;
 long long int a;
 long long int sum;
 
 scanf("%lld", &cas);
 
 for(int i = 1; i <= cas; i++){
 	scanf("%lld", &N);
 	long long int arr[100005] = {0};
 	for(int j = 0; j < N; j++){
 		scanf("%lld", &a);
 		arr[a]++;
	 }
	max = 0;
	for(int j = 0; j < 100005; j++){
		if(max < arr[j] ){
			max = arr[j];
		}
	}
	sum = 0;
	for(int j = 0; j < 100005; j++){
		if(max == arr[j]){
		sum += j;
		}
	}
	
	printf("Case #%lld: %lld\n", i, sum);
 }
 return 0;
}
