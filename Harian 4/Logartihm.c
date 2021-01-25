#include <stdio.h>

int main(){

 long long int n;
 int m;
 int cas;
 
 scanf("%d", &cas); getchar();
 
 for(int i = 1; i <= cas; i++){
 	scanf("%lld %d", &n, &m); getchar();
 	int counter = 0;
 	for(int i = m; i <= n; i *= m){
 		counter++;
	 }
 printf("Case #%d: %d", i, counter);
 
 puts("");
 }

 
	
 return 0;
}
