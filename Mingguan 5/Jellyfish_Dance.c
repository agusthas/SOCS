#include <stdio.h>

int main(){
 int cas, a, b, c, arr[255];
 int sum;
 
 scanf("%d", &a); //berapa banyak isi array
 getchar();
 for(int i = 1; i <= a; i++){ //looping isi array
 	scanf("%d", &arr[i]); getchar();
 }
 
 scanf("%d", &cas);
 getchar();
 
 for(int i = 1; i <= cas; i++){
 	scanf("%d %d", &b, &c);
 	getchar();
 	for(int i = b; i <= c; i++){
 		sum += arr[i];
	 }
	printf("Case #%d: %d\n", i, sum);
	sum = 0;
 }
 return 0;
}
