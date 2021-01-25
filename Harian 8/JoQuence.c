#include <stdio.h>
#define ll long long int
#define gtc() getchar()

int main(){
 int cas, N;
 int seq0, seq1;
 int newseq;
 scanf("%d", &cas); gtc();
 for(int i = 1; i <= cas; i++){
 	scanf("%d", &N); gtc();
 	seq0 = 2;
 	seq1 = 1;
 	newseq = 0;
 	if(N == 0){
 		printf("Case #%d: %d\n", i, seq0);
	}
	else if(N == 1){
		printf("Case #%d: %d\n", i, seq1);
	}
	else{
 	for(int j = 2; j <= N; j++){
 		newseq = seq0 + seq1 + 1;
 		seq0 = seq1;
 		seq1 = newseq;
	}
	printf("Case #%d: %d\n", i, newseq);
	}
 }
 return 0;
}

