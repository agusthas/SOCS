#include <stdio.h>

int main(){
	int n;
 	int cas;
 scanf("%d", &cas); //scan banyaknya case
 for(int i = 1; i <= cas; i++){

 scanf("%d", &n);
 int counter = 0;
 int flag = 0;
 
 printf("Case #%d: ", i);
 //looping pertama dibagi 2
 while(n%2 == 0){ 
 	counter++;
 	n /= 2;
 }
 	if(counter > 0){
 	printf("2 ^ %d", counter); //print 2 pangkat
 	flag = 1;
	}
	
 //looping setelah dibagi 2
 for(int i = 3; i * i <= n; i += 2){
	counter = 0;
 	if(n%i == 0){
 		while(n%i == 0){
 		counter++;
 		n /= i;
		}
		if(flag == 1){
		printf(" * %d ^ %d", i, counter);
		}
		else{
		printf("%d ^ %d", i, counter);
		flag = 1;
		}
	}
 }
 
 if(n > 1 && flag == 1){
 printf(" * %d ^ %d", n, 1);
 }
 else if(n > 1 && flag == 0){
 	printf("%d ^ %d", n, 1);
 }
 puts("");
}
 return 0;
}
