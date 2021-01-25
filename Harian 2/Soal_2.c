#include <stdio.h>

int main()
{
	char kata[110];
	char angka[110];
	scanf("%[a-z,A-Z]", kata);
	scanf("%s", angka);

	printf("%s\n", kata);
	printf("%s\n", angka);
	return 0;
}
