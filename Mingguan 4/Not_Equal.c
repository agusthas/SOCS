#include <stdio.h>

int main(){
 long long int a, b, c, d;
 scanf("%lld %lld %lld %lld", &a, &b, &c , &d);
 getchar();
  
 long long int x = a * b;
 long long int y = c + d;
 
 if(x > y){
 	printf("True\n");
 }
 else{
 	printf("False\n");
 }
 return 0;
}
