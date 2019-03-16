#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// your code goes here
		printf("here\n");
	int t,n,i;
	long long int h[1000000],w[1000000],p[1000000],b,max=0;
	printf("here\n");
	scanf("%d",&t);
	while(t--)
	{
	    printf("here\n");
	    scanf("%d %lli",&n,&b);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lli%lli%lli",&w[i],&h[i],&p[i]);
	        printf("here\n");
	        if(p[i]<=b)
	        {
	            if(max<(h[i]*w[i]))
	            {
	                max=h[i]*w[i];
	            }
	        }
	    }

	    if(max==0)
	    {
	        printf("no tablet\n");
	    }
	    else if(max>0)
	    {
	        printf("%lli",h[i]*w[i]);
	    }

	}
	//return 0;
}


