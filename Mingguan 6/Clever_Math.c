#include <stdio.h>
#define ll long long int

int digitsum(long long int x, long long int y){
	int sum = 0;
	int mult = 1;
	
	int bitsum;
	
	while(x != 0 || y != 0){
		
		bitsum = (x % 10) + (y % 10);
		
		bitsum %= 10;
		
		sum = (bitsum * mult) + sum;
		
		x /= 10;
		y /= 10;
		
		mult *= 10;
	}
	
	return sum;
}

int main(){
 int cas, T;
 long long int a, b; 		
 scanf("%d", &cas); getchar();
 
 for(int i = 1; i <= cas; i++){
 	scanf("%lld %lld", &a, &b); getchar();
 	printf("Case #%d: %lld\n", i, digitsum(a,b));
	
 }
 return 0;
}

