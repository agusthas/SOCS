#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()
void reverse(char sentence[], ll x, ll y){ // x = 0, y = len - 1 
	char temp;
	
	//base case
	if(x >= y){
		return;
	}
	
	// tuker variable
	temp = sentence[x];
	sentence[x] = sentence[y];
	sentence[y] = temp;
	reverse(sentence, x+1, y-1); //recursi dengan x maju 1 posisi dan y nya ngurang 1 posisi
}

int main(){
 ll cas, len;
 char sentence[1005];
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  scanf("%[^\n]s", sentence); gtc();
  len = strlen(sentence) - 1;
  reverse(sentence, 0, len);
  printf("Case #%d: %s\n", l, sentence);
 }
 return 0;
}
