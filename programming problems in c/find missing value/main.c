#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,m=1;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("before finding value");

     for(i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
    for(i=1;i<=10;i++)
    {
      if(a[i]!=m)
         {

        printf("\n missing value is %d ",m);
          m++;

         }

        m++;
    }

     return 0;
}
