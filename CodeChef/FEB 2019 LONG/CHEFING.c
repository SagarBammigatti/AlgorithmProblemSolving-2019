#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, n, i, c, x, flag, tally;
	//printf
	int **count = (int **)malloc(26 * sizeof(int *));
	char rec[201];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for (i=0; i<26; i++) 
         count[i] = (int *) malloc(n * sizeof(int)); 
		for(i=0; i<n; i++)
		{	c=0;
			scanf("%s", rec);
			while (rec[c] != '\0')
			{
				if (rec[c] >= 'a' && rec[c] <= 'z')
				{
	        		x =(int)(rec[c] - 'a');
	         		count[x][i]++;
				}
	         	c++;
      		}
      		
      	}
    	 	flag=0;
      	for(i=0; i<26; i++)
      	{	tally=0;
      		for(x=0; x<n; x++)
      		{
      			if(count[i][x]>0)
      				tally++;
			}
			if(tally==n)
				flag++;
      	}
    	printf("%d\n", flag);
	}	
}