#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t;
	// long int max=pow(10,18);
	//long long int max2=pow(10,9);
	unsigned long long int n,k,i,j,count;
	unsigned long int a,b;
	scanf("%d",&t);
	while(t--)
	{
	    
	   
	        count=0;
	        scanf("%lli%lli%lli%lli",&n,&a,&b,&k);
	        if(count==k)
	        {
	            continue;
	        }
	        if((a%b!=0) && (b%a!=0) )
	        {
	            count=(int)(n/a)+(int)(n/b)-((2)*((int)(n/(a*b))));
	        }
	        else if((a%b)==0)
			{
			    count=(int)(n/b)-(int)(n/a);
			}
		    else if((b%a)==0)
		    {
			    count=(int)(n/a)-(int)(n/b);
		    }
		    
		    if(count>=k)
		        printf("Win\n");
	        else
		        printf("Lose\n");
	}
	return 0;
}