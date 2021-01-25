#include <stdio.h>

int main(){
 int cas,a;
 long long int arr[255][255];
 long long int sum;
 long long int temp[255] = {0};
 long long int b = 0;
 scanf("%d", &cas);
 
 for(int x = 1; x <= cas; x++){
 	scanf("%d", &a);
 	for(int i = 0; i < a; i++){ //columns
 		for(int j = 0; j < a; j++){ //rows
 			scanf("%lld", &arr[i][j]);
 			getchar();
		 }
	 }
	for(int j = 0; j < a; j++){
		sum = 0;
		for(int i = 0; i < a; i++){
			sum += arr[i][j];
		    b = sum;	
		}
	temp[j] = b;
	}
 printf("Case #%d: ", x);
  for(int h = 0; h < a; h++){
		printf("%lld", temp[h]);
		if(h < a-1){
			printf(" ");
		}
	}
puts(""); 	
 }
 return 0;
}
