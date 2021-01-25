#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main(){
//scan length, width, height
	int l, w, h;
	scanf("%d %d %d", &l, &w, &h);
	getchar();

//quadrat dari l,w,h
	double l2, w2, h2;
	l2 = pow(l, 2);
	w2 = pow(w, 2);
	h2 = pow(h, 2);
	
//cari diagonal bawah quadrat
	double d_bawah;
	d_bawah = l2 + w2;
	
//cari diagonal prism 
	double temp1, d_prism;
	temp1 = d_bawah + h2;
	d_prism = sqrt(temp1);
	
//cari surface area dari sphere dengan diameter d_prism
	double diameter2, surface;
	diameter2 = pow(d_prism, 2);
	
	surface = pi * diameter2;
	
printf("%.2lf\n", surface);


		
 return 0;
}
