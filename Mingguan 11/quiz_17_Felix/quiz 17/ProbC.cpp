#include <stdio.h>

int main()
{
	FILE *data;
	int t, n, ice[105];
	int keliling,luas;
	data = fopen("testdata.in", "r");
	fscanf(data , "%d\n", &t);
	//printf("t: %d", t)
	for(int i=0; i<t; i++)
	{
		luas = 0;
		keliling =0;
		fscanf(data, "%d\n", &n);
		for(int j=0; j<n; j++)
		{
			fscanf(data, "%d", &ice[j]);
			
		}
		for (int j=0;j<n;j++)
		{
			luas  += 4*ice[j];
            keliling += (8*ice[j] - (4*(ice[j]-1)));
            if (j!= n-1)
			{
                if (ice[j] >= ice[j+1]) 
				{
                    keliling -= 4*ice[j+1];    
                }
                else 
				{
                    keliling -= 4*ice[j];
                }
    
            }
        }
		printf("Case #%d: %d %d\n", i+1 , keliling , luas);	
	}
}
