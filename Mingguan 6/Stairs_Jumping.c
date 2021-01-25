#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll cas, stairs, current, max, steps;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  scanf("%lld", &stairs); gtc();
  ll N[10005] = {0};
  steps = 0;
//scan array of N
  for(int i = 1; i <= stairs; i++){
  	scanf("%lld", &N[i]);
  	if(i == 1){
  		current = N[i]; // 1 2 3 4 6
	  }
  }
  
//cari max difference 
	max = 0;
  for(int i = 1; i <= stairs; i++){
  	if(N[i+1] - N[i] > max){
  		max = N[i+1] - N[i];
	  }
  }
  
// current = 1, max = 2
// masuk ke looping dibawah :
// i = 1, current = 3
// i = 2, current = 3
// i = 3, current = 3, steps = 1;
// i = 4, current = 5
// i = 5, current = 5
// current = 4, i = 4, steps = 1;
// i = 5, current = 6, steps = 1;

  for(int i = 1; i <= stairs; i++){
	current = current + max;
	for(current; current > N[i]; i++);
	if(current < N[i]){
		for(current; current != N[i-1]; current--);
		i--;
	}
	steps++;	
  }
  
  printf("Case #%d: %lld %lld\n", l, max, steps);
 }
 return 0;
}

