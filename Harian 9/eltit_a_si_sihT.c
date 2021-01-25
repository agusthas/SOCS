#include <stdio.h>
#define ll long long int
#define gtc() getchar()

void reverse(char *sentence){
	if(*sentence){
		reverse(sentence+1);
		printf("%c", *sentence);
	}
}

int main(){
 ll cas;
 char sentence[1005];
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  scanf("%[^\n]s", sentence); gtc();
  printf("Case #%d: ", l);
  reverse(sentence);
  puts("");
 }
 return 0;
}
