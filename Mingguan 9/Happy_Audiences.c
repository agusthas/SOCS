#include <stdio.h>
#define ll long long int
#define gtc() getchar()

void shift(ll *reg, ll N){
	ll temp = reg[N-1];
	for(int i = N - 1; i > 0; i--){
		reg[i] = reg[i-1];
	}
	reg[0] = temp;
}

ll maximum(ll *tempmax, ll N){
	ll max = tempmax[0];
	for(int i = 1; i < N; i++){
		if(tempmax[i] > max){
			max = tempmax[i ];
		}
	}
	return max;
}

int main(){
 ll cas, N;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  ll ctr;
  ll max = 0;
  ll vip[1005] = {0};
  ll reg[1005] = {0};
  ll tempmax[1005] = {0};
  
  scanf("%lld", &N); gtc();
  for(int i = 0; i < N; i++){
  	scanf("%lld", &vip[i]); gtc();
  }
  
  for(int j = 0; j < N; j++){
  	scanf("%lld", &reg[j]); gtc();
  }
  
  for(int h = 0; h < N; h++){
	ctr = N;
  	  for(int k = 0; k < N; k++){
  			if(reg[k] > vip[k]){
  			ctr++;
	  		}
  		}
  	tempmax[h] = ctr;
  	shift(reg, N);
  }
  
  printf("Case #%d: %lld\n", l, maximum(tempmax, N));
 }
 return 0;
}

