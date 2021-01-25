#include <stdio.h>
#define ll long long int
#define gtc() getchar()

long long int gcd(long long int x, long long int y){
	if(y == 0){
		return x;
	}
	return gcd(y, x%y);
}

long long int lcm(long long int a, long long int b){
	return (a*b)/gcd(a,b);
}


long long int lcmarray(long long int numlist[], long long int N){
	ll temp = lcm(numlist[0], numlist[1]);
	for(int i = 2; i < N; i++){
		temp = lcm(temp, numlist[i]);
	}
	return temp;
}

int main(){
 ll cas;
 long long int N, a;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  scanf("%lld", &N); gtc();
  long long int numlist[40] = {0};
  for(int j = 0; j < N; j++){
  	scanf("%lld", &a); gtc();
  	numlist[j] = a;
  }
  printf("Case #%d: %lld\n", l, lcmarray(numlist, N));
 }
 return 0;
}
