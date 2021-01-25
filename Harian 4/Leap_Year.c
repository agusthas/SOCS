#include <stdio.h>

int main(){
 int year, a, b, c, n, cas;
 int kabisat;
 scanf("%d", &cas); getchar();
 
 for(int i = 1; i <= cas; i++){
 	scanf("%d %d %d %d", &n, &a, &b, &c); getchar();
 	kabisat = 0;
 	for(int i = 1; i <= n; i++){
 	scanf("%d", &year); getchar();
 	
	if(year%a == 0 && year%b != 0){
		kabisat++;
	}
	if(year%a == 0 && year%b == 0 && year%c == 0){
		kabisat++;
	}
	
 }
 printf("Case #%d: %d\n", i, kabisat);
 }
 
 return 0;
}
