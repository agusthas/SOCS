#include <stdio.h>

int main(){
 char h[3];
 char m[3];
 char s[3];
 
 scanf("%2s:%2s:%2s", h, m, s);
 getchar();
 printf("%s %s %s\n", h, m, s);
 
 return 0;
}
