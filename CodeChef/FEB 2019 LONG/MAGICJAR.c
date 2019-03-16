#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	long long int i,n,a[1000000000],max;
	
	scanf("%d",&t);
	while(t--)
	{
	    max=0;
	    scanf("%lli",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lli",&a[i]);
	        max=max+a[i]-1;
	    }
	   
	    
	    printf("%lli\n",max+1);
	}
}

