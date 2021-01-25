#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

void alphabet_counter(char *sentence, int *counter, ll len){
	for(int i = 0; i <= len; i++){
		if(sentence[i] == ' ') continue; //kalo ketemu spasi, lanjutin
		
		if(sentence[i] > 96){
			counter[sentence[i] - 'a'] += 1;
		}
	}
}

int counter_check(int *counter){
	int flag = 0;
	for(int i = 0; i < 26; i++){
		if(counter[i] == 0){
			flag++;
			break;
		}
	}
	return flag;
}
int main(){
 ll cas, len;
 char sentence[100005];
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
  int counter[26] = {0};
  scanf("%[^\n]s", sentence); gtc();
  len = strlen(sentence);
  
  alphabet_counter(sentence, counter, len);
  
  if(counter_check(counter) == 0){
  	printf("Case #%d: YES\n", l);
  }
  else{
  	printf("Case #%d: NO\n", l);
  }
  
 }
 return 0;
}
