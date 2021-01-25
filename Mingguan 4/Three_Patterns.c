#include <stdio.h>

int main(){
 int n,m;
 scanf("%d %d", &n, &m);
 int c = m;
 getchar();
 
 //all n x n #-symbols
 for(int i = 0; i < n; i++){
 	for(int j = 0; j < n; j++){
 		printf("#");
	 }
	 printf("\n");
 }
puts("");
//except m rows #-symbols
	const int b = m;
 for(int i = 1; i <= n; i++){
 	if(i == m){
 		for(int j = 1; j <= n; j++){
			printf("#");
 		}
 			m = m + b;
	 	}
	else{
		for(int j = 1; j <= n; j++){
 		printf(".");
		}
 	}
	 printf("\n");
}
puts("");
 //n x n .-symbols , except every m columns #-symbols
 	const int a = c;
 for(int i = 0; i < n; i++){
 	m = 0;
 	for(int j = 1; j <= n; j++){
 		if(j == m + a){
 			printf("#");
 			m = m + a;
	 	}
	 	else{
	 		printf(".");
		}
 	}
	 printf("\n");
}
 return 0;
}
