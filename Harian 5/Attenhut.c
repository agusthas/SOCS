#include <stdio.h>

int main(){
 long long int N;
 long long int squadron[100005];
 scanf("%d", &N);
 
 for(int i = 0; i < N; i++){
 	scanf("%lld", &squadron[i]);	
 }
 long long int temp = squadron[0];
 long long int sum = 0;
 
 for(int i = 0; i < N; i++){
 	if(temp != squadron[i]){
 		temp = squadron[i];
 		sum += 1;
	 }
 }
 
 printf("%lld\n", sum+1);
 
 return 0;
}
