#include <stdio.h>

int main(){
	int cas,n,a;
	scanf("%d", &cas);
 for(int i = 1; i <= cas; i++){
 	 scanf("%d", &n);
 
 int ecounter = 0;
 int ocounter = 0;
 for(int i = 1; i <= n; i++){
 	scanf("%d", &a);

 	if(a%2 == 0){
 		ecounter++;
	 }
	else{
		ocounter++;
	}
 }
 printf("Odd group : %d integer(s).\n", ocounter);
 printf("Even group : %d integer(s).\n\n", ecounter);
 }
 return 0;
}
