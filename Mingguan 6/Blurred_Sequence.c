#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll cas, sum, digitsum, a, b, n, m, o, p;
 ll fib[100] = {0,1};

 	a = 1; //index - 1
	b = 0; //index - 2
	
 for(int j = 2; j <= 64 ; j++){
  	fib[j] = a + b;
	b = a;
	a = fib[j]; 
  }
  
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  scanf("%d %d", &o, &p);
 
//  printf("Index 0 = 0\n");
//  printf("Index 1 = 1\n");
//  for(int j = 2; j <= 64; j++){
//  	printf("Index %d : %lld\n", j, fib[j]);
//  }
  
  sum = 0;
  for(int i = o; i <= p; i++){
  	digitsum = 0;
  	if(fib[i] >= 10){
  		n = fib[i];
  		while(n > 0){
  			m = n % 10;
  			digitsum += m;
  			n /= 10;
		  }
		sum += digitsum;
		continue;
	  }
	sum += fib[i];
  }
  printf("Case #%d: %lld\n", l, sum);
 }
 return 0;
}


