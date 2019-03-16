#include <stdio.h>

int main(void) {
	// your code goes here
	long long int t;
	scanf("%lli",&t);
	long long int a,b,c,d,e,x1,y1,x2,y2,ans;
	if(t<=500 && t>=1){
	while(t--)
	{
	    //printf("%lli\n",t);
	    fflush(stdout);
	    printf("Q 0 0\n");
	    fflush(stdout);
	   // q++;
	    scanf("%lli",&a);
	    printf("Q 0 1000000000\n");
	    fflush(stdout);
	    //q++;
	    scanf("%lli",&b);
	    printf("Q 1000000000 1000000000\n");
	    fflush(stdout);
	    //q++;
	    scanf("%lli",&c);
	    printf("Q 1000000000 0\n");
	    fflush(stdout);
	   // q++;
	    scanf("%lli",&d);
	    e=(a-b+1000000000)/2;
	    printf("Q 0 %lli\n",e);
	    fflush(stdout);
	   // q++;
	    scanf("%lli",&x1);
	    y1=a-x1;
	    x2=1000000000+y1-d;
	    y2=1000000000+x1-b;
	    printf("A %lli %lli %lli %lli\n",x1,y1,x2,y2);
	    fflush(stdout);
	    scanf("%lli",&ans);
	    fflush(stdout);
	    if(ans<0)
	        break;
	    
	    
	 }
	}
	return 0;
}

