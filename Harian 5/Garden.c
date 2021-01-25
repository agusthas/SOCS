#include <stdio.h>

int main(){
 int x,y,z;
 int garden[255][255];
 int a,b,c;
 
 scanf("%d %d", &x, &y); getchar();
 
 for(int i = 1; i <= x; i++){
 	for(int j = 1; j <= y; j++){
 		scanf("%d", &garden[i][j]); getchar();
	 }
 }
 
 scanf("%d", &z); getchar(); //end
 for(int k = 1; k <= z; k++){
 	scanf("%d %d %d", &a, &b, &c); getchar();
 	garden[a][b] = c;
 }
 
 for(int i = 1; i <= x; i++){
 	for(int j = 1; j <= y; j++){
 		printf("%d", garden[i][j]);
 		if(j < y){
 			printf(" ");
		 }
	}
	puts("");
 }
 return 0;
}
