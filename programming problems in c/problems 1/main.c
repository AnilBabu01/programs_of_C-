#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10],b[10],c[10],i,aa=0,bb=0,cc=0;
    a[0]=1;
    a[1]=2;
    a[2]=3;

    b[0]=4;
    b[1]=5;
    b[2]=6;


    for(i=1;i<=6;i++)
    {
        if(i%2==0)
        {
            c[cc]=b[aa];
            aa++;
            cc++;
        }
        else
        {
            c[cc]=a[bb];
            bb++;
            cc++;
        }
    }


    for(i=0;i<6;i++)
    {
        printf(" %d ",a[i]);
    }







    return 0;
}
