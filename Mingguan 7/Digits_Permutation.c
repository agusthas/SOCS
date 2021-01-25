#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

void swap(ll *k, int o, int p){
	int temp1;
	temp1 = k[o];
	k[o] = k[p];
	k[p] = temp1;
}

void perm(long long int *a, int b, int N, long long int *summe){
	if(b == N){
		ll sum = 0;
		for(int m = 0; m <= N; m++){
			sum = (sum * 10) + a[m];
		}
		*summe += sum; 
	}
	else{
		for(int i = b; i <= N; i++){
			swap(a, b, i);
			perm(a, b+1, N, summe);
			swap(a, b, i); //backtrack
		}
	}
}

int main(){
 ll cas, total;
 int N, a, b;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  ll temp[100];
  total = 0;
  scanf("%d", &N); gtc();
  for(int i = 0; i < N; i++){
  	scanf("%lld", &temp[i]); gtc();
  }
  
  perm(temp, 0, N-1, &total);
  printf("Case #%d: %lld\n", l, total);
  	
  }
 return 0;
} //ganti lagi kata fadim


