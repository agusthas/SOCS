#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

ll flag;

void counter(char mainstring[], char substring[], long long int x, long long int y){
	if(y == -1){
		flag++;
		return;
	}
	for(long long int i = x; i >= 0; i--){
		if(substring[y] == mainstring[i]){
			counter(mainstring, substring, i - 1, y - 1);
		}
	}
}

int main(){
 ll cas, x, y;
 char mainstring[25];
 char substring[10];
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 flag = 0;
 scanf("%[^\n]s", &mainstring); gtc();
 scanf("%[^\n]s", &substring); gtc();
 x = strlen(mainstring);
 y = strlen(substring); 
 counter(mainstring, substring, x, y);
 printf("Case #%d: %lld\n", l, flag);
 }
 return 0;
}
