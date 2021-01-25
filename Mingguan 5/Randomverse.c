#include <stdio.h>

int main(){
 int cas,a,c;
 long long int b[10005];
 scanf("%d", &cas);
 
 for(int i = 1; i <= cas; i++){
 	scanf("%d", &a);
 	for(int i = 1; i <= a; i++){
 		scanf("%lld", &b[i]);	
	 }
	printf("Case #%d: ", i);
	for(int i = a-1, j = a; i >= 1; i-=2, j -=2){
		printf("%lld %lld", b[i], b[j]);
		if(i > 1){
			printf(" ");
		}
	}
	puts("");
 }
 return 0;
}
