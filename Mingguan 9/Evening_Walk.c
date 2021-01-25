#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll N, M, distance = 0;
 scanf("%lld %lld", &N, &M);
 char park[N+1][M+1];
 
 for(int i = 1; i <= N; i++){
 	for(int j = 1; j <= M; j++){
 		scanf("%c", &park[i][j]);
 		if(park[i][j] == '.' || park[i][j] == 'E'){
 			distance++;
		}
	 }
 }
 
 printf("%lld\n", distance);
 return 0;
}

