#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int main(){
 ll cas, K, count;
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 scanf("%lld", &K); gtc();
 
 char words[K+100];
 scanf("%[^\n]", words);
 ll len = strlen(words);
 
 count = 0;
 for(int i = 0; i < len ; i++){
 	if(words[i] != ' '){
 		if(words[i] >= 'a' && words[i] <= 'z'){
 			if(words[i+1] == ' ' || i == len-1){
 				count++;
			}
	 	}
	}
 }

 printf("Case #%d: %lld\n", l, count);
 }
 return 0;
}
