#include <stdio.h>

int main(){
 char nama[120];
 char nis[10];
 int usia;
 
 scanf("%[^\n]s", nama);
 scanf("%s %d", nis, &usia);
 
 printf("Name: %s\n", nama);
 printf("NIS: %s\n", nis);
 printf("Age: %d\n", usia);
 return 0;
}
