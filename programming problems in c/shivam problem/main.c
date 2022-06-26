#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3],b[3],c[10];
    int i,aa=0,bb=0;

    printf("\n enter element of array a:\n");

    for(i=0;i<3;i++)
    {
        scanf("\n%d",&a[i]);
    }

        printf("\n enter element of array b:\n");

    for(i=0;i<3;i++)
    {
        scanf("\n%d",&b[i]);
    }

    for(i=0;i<3;i++)
    {
        printf(" %d ",a[i]);
    }

    for(i=0;i<3;i++)
    {
        printf(" %d ",b[i]);
    }

     for(i=0;i<6;i++)
    {
        if(i==0 || i==2 || i==4)
        {
            c[i]=a[aa];
            aa++;
        }

        else
        {
            c[i]=b[bb];
            bb++;
        }
    }


    printf("\n array c is:");

    for(i=0;i<6;i++)
    {
        printf("\n %d",c[i]);
    }


}
