#include<stdio.h>
#include<stdlib.h>
#include<string.h>

///number of ways to find the sum of 15 using 3,5 and 10
int main()
{

    int a[16];
    memset(a,0,sizeof(a));

    a[0]=1;
    int i,j;

    for(i=3;i<sizeof(a);i++)
    {
        if(a[i-3]>0)
        {
           a[i]=a[i]+a[i-3];
        }
    }
    for(i=5;i<sizeof(a);i++)
    {
        if(a[i-5]>0)
        {
           a[i]=a[i]+a[i-5];
        }
    }
    for(i=10;i<sizeof(a);i++)
    {
        if(a[i-10]>0)
        {
           a[i]=a[i]+a[i-10];
        }
    }

    printf("%d\n",a[15]);
    return 0;
}
