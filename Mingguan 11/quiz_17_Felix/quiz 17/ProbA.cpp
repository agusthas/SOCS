#include <stdio.h>
#include <string.h>

char table(char y)
{
    int x = y - '0';
    switch(x)
	{
        case 0:
             return 'O';break;
        case 1:
            return 'I';break;
        case 3:
            return 'E';break;
        case 4:
            return 'A';break;
        case 5:
            return 'S';break;
        case 6:
            return 'G';break;
        case 7:
            return 'T';break;
        case 8:
            return 'B';break;
        default:
            return y;break;
    }
}

int main()
{
	FILE *data; 
	int t, shift;
	char text[1050];
	data = fopen("testdata.in", "r");
	fscanf(data , "%d\n", &t);
	//printf("t: %d", t); //debug
	for(int i=0; i<t; i++)
	{
		fscanf(data , "%d\n", &shift);
		//printf("shift: %d", shift); //debug
		fscanf(data , "%[^\n]\n", text);
		int length = strlen(text);
		printf("Case #%d: ", i+1);
		for(int j=0; j<length; j++)
		{
			text[j] = table(text[j]);
			if(text[j]==' ')
			{
				printf(" ");	
			}
			else
			{
				//((s+26-'A'-n)%26+'A') rumus
				printf("%c", ((text[j] + 26 - 'A' - shift) % 26 + 'A'));	
			}	
		}
		printf("\n");
	}
	return 0;
}

