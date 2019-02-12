/* The following code make us of Kadane's algorithm*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a[7]={-2,-3,4,-1,-2,1,5,3};
    int tmax=0;
    int max=0;
    int i=0,n=7;

    for(i=0;i<n;i++)
    {
        tmax=tmax+a[i];
        if(tmax<0)
        {
            tmax=0;
        }
        if(max<tmax)
        {
            max=tmax;
        }
    }
    printf("%d\n",max);
}
