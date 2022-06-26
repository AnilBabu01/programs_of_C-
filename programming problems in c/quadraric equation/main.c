#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

   int a,b,c,discriminant;
     float root1,root2;
      printf("\n enter the value of a");
          scanf("%d",&a);
       printf("\n enter the value of b");
           scanf("%d",&b);
      printf("\n enter the value of c");
           scanf("%d",&c);

        discriminant=b*b-4*a*c;

        if(discriminant<0)
        {
            printf("\n both roots are imaginary");
        }
        if(discriminant==0)
        {
            printf("\n both roots are equal");
              root1=-b/(2.0*a);
              root2=-b/(2.0*a);

              printf("\n root1 is %f",root1);
               printf("\n root2 is %f",root2);


        }
      if (discriminant>0)
        {
            printf("\n Roots are real and distint");
            root1=(-b+sqrt(discriminant))/(2*a);
             root2=(-b-sqrt(discriminant))/(2*a);
         printf("\nRoot1 = %f",root1);
         printf("\nRoot1 = %f",root2);


        }


    return 0;
}
