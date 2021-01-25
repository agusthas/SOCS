#include <stdio.h>
#define gtc() getchar()
#define ll long long int
int main(){
 ll cas, b, max, count;
 
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  count = 0;
  scanf("%lld", &b); gtc();
  
  ll st[100005], fin[100005];
  for(int j = 0; j < b; j++){
  	scanf("%lld %lld", &st[j], &fin[j]); gtc();
  }
  
  st[b] = fin[b-1];
  max = -1;
//  printf("Max: %lld\n", max);
  for(int j = 0; j < b; j++){
  	if(st[j] >= max && fin[j] <= st[j + 1]){
  		max = fin[j - 1];
  		count++;
	  }
	else if(max < fin[j]){
		max = fin[j];
	}
  }

  printf("Case #%d: %lld\n", l, count);
 }
 return 0;
}

