#include <stdio.h>

int main(){
 int T,N,i,j;
 long int A = 0;
long int sum = 0;
long int min = 0;
 
 scanf("%d", &T);
 
 for(i=1;i<=T;i++){
 	scanf("%d", &N);
 	

 	
 	for(j=1; j<=N;j++){
 		scanf("%ld", &A);
 		
 		sum += A;
 		printf("Sum = %ld\n", sum);
 	
 		if(sum<min){
 			min = sum;
 			printf("Min = %ld\n", min);
		 }
	 }
	 printf("Case %d: %ld\n", i, min * -1 + 1);
 }
 
 return 0;
}
