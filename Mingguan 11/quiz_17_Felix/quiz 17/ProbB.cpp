#include <stdio.h>
#include <string.h>
int main()
{
	FILE *data;
	data = fopen("D:\\projects\\C and C++ Language\\Mingguan 11\\testdata.in", "r");
	int t;
	int query;
	char a, b;
	fscanf(data, "%d\n", &t);
	char name[105];
	for (int i = 0; i < t; i++)
	{
		int count[26] = {0};
		int flag[26] = {0};
		fscanf(data, "%s\n", name); //kalau 1d ga perlu [i] kalau 2d baru [i] berlaku hanya untuk %s
		int length = strlen(name);
		for (int k = 0; k < length; k++)
		{
			count[name[k] - 'A']++;
		}
		fscanf(data, "%d\n", &query);
		{
			for (int j = 0; j < query; j++)
			{
				fscanf(data, "%c %c\n", &a, &b);
				if (flag[a - 'A'] == 0)
				{
					count[b - 'A'] = count[b - 'A'] + count[a - 'A']; // count['L'] = count['L'] + count['J'];
					count[a - 'A'] = 0;
					flag[a - 'A'] = 1;
				}
			}
			for (int l = 0; l < 26; l++)
			{
				if (count[l] > 0)
				{
					printf("%c %d\n", l + 'A', count[l]);
				}
			}
		}
	}

	return 0;
}
