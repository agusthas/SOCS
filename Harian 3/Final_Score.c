#include <stdio.h>

int main(){
 double ass, midexam, finalexam;
 scanf("%lf %lf %lf", &ass, &midexam, &finalexam);
 getchar();
 
 double percent1 = (ass * 20) / 100;
 double percent2 = (midexam * 30) / 100;
 double percent3 = (finalexam * 50) / 100;
 double total = percent1 + percent2 + percent3;
 
 printf("%.2lf\n", total);
 return 0;
}
