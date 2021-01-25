#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main() {
	ll cas;
	ll N;
	unsigned long long sum = 0, pile;
	scanf("%lld", &cas);
	gtc();

	for(int l = 1; l <= cas; l++) {
		sum = 0;
		scanf("%lld", &N);
		gtc(); // numbers of piles
		for(int i = 1; i <= N; i++) {
			scanf("%llu", &pile);
			if(i % 2 == 0) { // if i even
				sum += pile;
			}
		}
		printf("Case #%d: %llu\n", l , sum); 30/11/20 10:24
	}
	return 0;
}
