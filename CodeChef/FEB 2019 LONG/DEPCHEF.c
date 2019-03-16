#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,soldier[10000],defence[10000],maxdefence=-1,i;
	scanf("%d",&t);
	while(t--)
	{
	    maxdefence=-1;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&soldier[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&defence[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	           // printf("%d %d %d\n",soldier[n-1]+soldier[1],defence[i],maxdefence);
	           if((soldier[i+1]+soldier[n-1])<defence[i])
	           {    //printf("T1");
	                if (defence[i]>maxdefence)
	            {
	                maxdefence=defence[i];
	            }
	           }
	        }
	        else if(i==n-1)
	        {
	            //printf("%d %d %d\n",soldier[n-2]+soldier[0],defence[i],maxdefence);
	            if((soldier[n-2]+soldier[0])<defence[n-1])
	            {
	                    if(defence[i]>maxdefence)
	            {
	                maxdefence=defence[n-1];
	            }
	            }
	        }
	        else
	        {
	           // printf("%d %d %d\n",soldier[i-1]+soldier[i+1],defence[i],maxdefence);
	            if((soldier[i-1]+soldier[i+1])<defence[i])
	            {
	                if (defence[i]>maxdefence)
	            {
	                maxdefence=defence[i];
	            }
	            }
	        }
	        
	    }
	    	printf("%d\n",maxdefence);
	}

	return 0;
}

