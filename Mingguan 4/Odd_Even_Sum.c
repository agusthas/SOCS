#include <stdio.h>

int main(){
	int n;
	long long x,y;
	long long int list[255];
 scanf("%d %lld %lld", &n, &x, &y);
 getchar();
 
 //ngescan list
 for(int i = 1; i <= n; i++){
 	scanf("%lld", &list[i]);
 }

	long long int sum1 = 0;
	long long int sum2 = 0;
 for(int i = 1; i <= n; i++){
 	if(list[i] % 2 == 0){
 		list[i] = list[i] * y;
 		sum1 += list[i];
	 }
	else{
		list[i] = list[i] * x;
		sum2 += list[i];
	}
 }
 
printf("%lld\n", sum1+sum2);
 
 
 return 0;
}
