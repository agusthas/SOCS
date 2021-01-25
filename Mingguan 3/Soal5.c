#include <stdio.h>

int main(){
 int n, s, a, b, c;
 scanf("%d %d %d %d %d", &n, &s, &a, &b, &c);
 getchar();
 
int l, w, h;
l = a / s;
w = b / s;
h = c / s;

//printf("%d %d %d\n", l, w, h);

//banyaknya kubus dalam 1 container
	int x = l * w * h;
//	
//berapa banyak kontainer
//yang di modulo itu hasil akhir nya
	if(n % x != 0 ){
	printf("%d\n", (n/x)+1);
	}
	else{
		printf("%d\n", n/x);
	}	
 return 0;
}
