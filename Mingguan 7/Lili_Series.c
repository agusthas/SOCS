#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int count;

//recursion
int lily(int n){
	if(n == 0) return 1;
	if(n == 1) return 2;
	if(n > 1){
		if(n % 3 == 0){
			if(n == 3){
			count++;
			return lily(n-(n/3))+1;
			}
			return lily(n-(n/3))+1;
		}
		if(n == 4){
			count++;
			return lily(n-1) + n + lily(n-2) + 1;
		}
	return lily(n-1) + n + lily(n-2) + 1;
	}
}

int main(){
 ll cas;
 int A, n;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 count = 0;	
 scanf("%d", &n); gtc();
 A = lily(n);
 printf("Case #%d: %d %d\n", l, A, count); 
 }
 return 0;
}
