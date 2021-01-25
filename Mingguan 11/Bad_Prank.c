#include <stdio.h>
#include <string.h>
#define gtc() getchar()

int main()
{
    FILE *fp;
    fp = fopen("testdata1.in", "r");

    int T = 0;
    int x_shift = 0;
    char str[1001];
    char new;
    while (!feof(fp))
    {
        fscanf(fp, "%d\n", &T);
        // printf("T = %d\n", T);

        for (int i = 1; i <= T; i++)
        {
            fscanf(fp, "%d\n", &x_shift);
            // printf("x_shift = %d\n", x_shift);
            fscanf(fp, "%[^\n]\n", str); // read a line until a newline in the file appear
            // printf("%s\n", str);
            int str_len = strlen(str);
            int al_shift; // to calculate
            printf("Case #%d: ", i);
            for (int j = 0; j < str_len; j++)
            {
                if (str[j] == ' ')
                {
                    printf(" ");
                    continue;
                }

                switch (str[j])
                {
                case '0':
                    str[j] = 'O';
                    break;

                case '1':
                    str[j] = 'I';
                    break;

                case '3':
                    str[j] = 'E';
                    break;

                case '4':
                    str[j] = 'A';
                    break;

                case '5':
                    str[j] = 'S';
                    break;

                case '6':
                    str[j] = 'G';
                    break;

                case '7':
                    str[j] = 'T';
                    break;

                case '8':
                    str[j] = 'B';
                    break;
                }

                al_shift = str[j] - x_shift;
                if (al_shift < 65)
                {
                    printf("%c", 91 - (65 % al_shift));
                }
                else
                {
                    printf("%c", al_shift);
                }
            }
            printf("\n");
        }
    }

    fclose(fp);
    return 0;
}