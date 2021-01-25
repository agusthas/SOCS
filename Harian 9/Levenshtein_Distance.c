#include <stdio.h>
#include <string.h>
#define ll long long int
#define gtc() getchar()

int min(int a, int b, int c){
	if(a <= b && a <= c){
		return a;
	}
	else if(b <= a && b <= c){
		return b;
	}
	else{
		return c;
	}
}

int leviathan(char word1[], char word2[], ll len1, ll len2){
	//temporary array
	int lev[len1+1][len2+1];
	
	for(int i = 0; i <= len1; i++){
		for(int j = 0; j <= len2; j++){
			if(i == 0) lev[i][j] = j;
			else if(j == 0) lev[i][j] = i;
			else if(word1[i-1] == word2[j-1]) lev[i][j] = lev[i-1][j-1];
			else lev[i][j] = min(lev[i-1][j] + 1, lev[i][j-1] + 1, lev[i-1][j-1] + 1);
		}
	}
	return lev[len1][len2];
}

int main(){
 ll cas, len1, len2;
 char word1[12];
 char word2[12];
 scanf("%lld", &cas); gtc();
 
 for(int l = 1; l <= cas; l++){
 scanf("%s", word1); gtc();
 scanf("%s", word2); gtc();
 len1 = strlen(word1);
 len2 = strlen(word2);
 printf("Case #%d: %d\n", l, leviathan(word1, word2, len1, len2));
  
 }
 return 0;
}
