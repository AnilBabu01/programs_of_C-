#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],c[10];
    int i,aa=0,bb=0,cc=0;

    a[0]=1;
    a[1]=2;
    a[2]=3;

    b[0]=4;
    b[1]=5;
    b[2]=6;
  for(i=0;i<3;i++)
  {
        c[i+i]=a[i];
        c[i+i+1]=b[i];

  }

for(i=0;i<6;i++)
{
    printf(" %d ",c[i]);
}

    return 0;
}
