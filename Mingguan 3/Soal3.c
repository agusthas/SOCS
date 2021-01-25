#include <stdio.h>

int main(){
	int t;
	double a, b, x;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		scanf("%lf %lf", &a, &b);
		getchar();
		x = ((b * a)/360);
		printf("%.2lf\n", x);
	}

 return 0;
}
