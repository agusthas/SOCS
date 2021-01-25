#include <stdio.h>

int main(){
 int cas;
 long long int N; //array element
 long long int a;
 long long int max;
 long long int ctr;
 long long int start;
 
 scanf("%d", &cas); getchar();
 
 for(int x = 1; x <= cas; x++){
 	scanf("%lld", &N); getchar();  
	long long int temp[200005] = {0};
  for(int i = 1; i <= N; i++){
  	scanf("%lld", &a); getchar();
  	++temp[a];

  }
  max = 0;
  for(int g = 0; g < 200005; g++){
 	if(max < temp[g]){
 		max = temp[g];
	 }
  }
  printf("Case #%d: %lld\n", x, max);
  start = 0;
  for(int k = 0; k < 200005; k++){
  	if(temp[k] == max){
  		if(start == 0){
  			printf("%d", k);
  			start++;
		  }
		else{
			printf(" %d", k);
		}
	  }
	}
 puts("");
  }  

 return 0;
}
