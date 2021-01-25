#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int jolly(int x, int y){
	if(x == 0 || y == 0){
		return 0;
	}
	return((2*x) + (3*y) + jolly(x-1, y) + jolly(x, y-1));
}

int main(){
 int n, m;
 scanf("%d %d", &n, &m); gtc();
 printf("%d\n", jolly(n, m));
 return 0;
}

