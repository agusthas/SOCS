#include <stdio.h>

int main(){
 char kata[100];
 scanf("%[^\n]s", kata);
 	printf("#include <stdio.h>\nint main()\n{\n");
	printf("    printf(""\"%%s\\n\",\"%s\");\n", kata);
	printf("    return 0;\n" "}\n");
 return 0;
}
