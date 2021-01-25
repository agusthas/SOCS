#include <stdio.h>

int main()
{
	FILE *data;
	data = fopen("D:\\projects\\C and C++ Language\\Mingguan 11\\testdata.in", "r");
	int t;	  //test case
	int a, b; //besar matrix
	fscanf(data, "%d\n", &t);
	for (int i = 1; i <= t; i++)
	{
		int xmin = 1000, ymin = 1000, xmax = -1, ymax = -1; //x kanan y kebawah
		//printf("test case: %d", t);
		fscanf(data, "%d %d\n", &a, &b);
		//printf("besar matriks %dx%d", a , b);
		char matrix[a + 1][b + 1];
		for (int j = 0; j < a; j++) //kebawah
		{
			for (int k = 0; k < b; k++) //kekanan
			{
				if (k == b - 1)
				{
					fscanf(data, "%c\n", &matrix[j][k]);
					// printf("%c\n", matrix[j][k]);
				}
				else
				{
					fscanf(data, "%c", &matrix[j][k]);
					// printf("%c", matrix[j][k]);
				}

				if (matrix[j][k] != '.')
				{
					if (k < xmin)
					{
						xmin = k;
					}
					if (k > xmax)
					{
						xmax = k;
					}
					if (j < ymin)
					{
						ymin = j;
					}
					if (j > ymax)
					{
						ymax = j;
					}
				}
			}
		}

		printf("ymax = %d, ymin = %d, xmax = %d, xmin = %d\n", ymax, ymin, xmax, xmin);
		printf("Case #%d:\n", i);
		printf("%d %d\n", ymax - ymin + 1, xmax - xmin + 1);
		for (int awal = ymin; awal <= ymax; awal++)
		{
			for (int awal2 = xmin; awal2 <= xmax; awal2++)
			{
				printf("%c", matrix[awal][awal2]);
			}
			printf("\n");
		}
	}

	return 0;
}
