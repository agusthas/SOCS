#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int arr[10];
int flag[10] = {0};

void perm(int x, int N){
 if (x >= N){
 	for(int j = 0; j < N; j++){
 		printf("%d", arr[j]);
	}
	puts("");
 }
 else{
 	for(int i = 1; i <= N; i++){
 		if(flag[i] != 0) continue;
 		
		else{
		flag[i] = 1;
 		arr[x] = i;
 		perm(x+1,N);
 		flag[i] = 0;
		}
	 }
 }
}

int main(){
 ll cas;
 int N;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  scanf("%d", &N);
  printf("Case #%d:\n", l);
  perm(0,N); 
 }
 return 0;
}

