#include <stdio.h>
#include <math.h>
#define ll long long int
#define gtc() getchar()

ll pangkat(int N){
	ll hasil = 1;
	for(int i = 1; i <= N; i++){
		hasil = hasil * 2;
	}
	return hasil;
}

void bintang(int space, int x){
	for(int i = 0; i < space; i++){
		printf(" ");
	}
	for(int j = 0; j < x; j++){
		printf("*");
	}
	puts("");
}
void recur(int N, int space){
	if(N >= 0){
		recur(N-1, space);
		bintang(space, pangkat(N));
		recur(N-1, space + (pangkat(N)/2));
	}
}
int main(){
 int N, space;
 scanf("%d", &N);
 space = 0;
 recur(N, space);
 return 0;
}

