#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,sum=0,sum1=0,r;

        for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("before finding value");

     for(i=1;i<=5;i++)
    {
        printf(" %d ",a[i]);
    }
    for(i=1;i<=5+1;i++)
    {
        sum=sum+i;
    }

     for(i=1;i<=5;i++)
    {
       sum1=sum1+a[i];
    }

       printf("sum1 = %d , sum2 = %d ",sum,sum1);
     r=sum-sum1;
         printf("\n the missing number is %d ",r);
     return 0;
}
