#include <stdio.h>

int main(){
 int N;
 long long int mult = 1;
 scanf("%d", &N);
 
 for(int i = 0; i < N; i++){
	mult = mult * 2;
 }
 
 printf("%lld\n", mult - 1);
 return 0;
}

