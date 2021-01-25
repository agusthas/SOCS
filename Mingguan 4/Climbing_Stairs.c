#include <stdio.h>

int main(){
	int x;
	int steps[1000];
 scanf("%d", &x);
 getchar();
 
 //looping isi array
 for(int i = 1; i <= x; i++){
 	scanf("%d", &steps[i]);
 }
 
 //looping penghitungan
 for(int i = 1; i <= x; i++){
 		if(steps[i+1] == 1){
 		printf("%d ", steps[i]);
	 	}
 	}
 printf("%d\n", steps[x]);
 return 0;
}
