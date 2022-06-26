
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 10
typedef struct
{
    int a[max];
    int sp1,sp2;
}stack;
typedef enum{FALSE,TRUE}Boolean;
void createemptystack(stack *s)
{
    s->sp1=-1;
    s->sp2=max;
}
Boolean isempty1(stack *s)
{
    if(s->sp1==-1)
return(TRUE);
    else
return(FALSE);
}
Boolean isempty2(stack *s)
{
    if(s->sp2==max)
return(TRUE);
    else
return(FALSE);
}
Boolean isfull(stack *s)
{
    if((s->sp1+1)==s->sp2)
return(TRUE);
    else
return(FALSE);
}
void PUSH1(stack *s)
{
    int item;
    if(isfull(s))
printf("\n OVERFLOW \n");
    else
    {
printf("\n Enter item = ");
scanf("%d",&item);

        s->sp1++;
        s->a[s->sp1]=item;
    }
}
void PUSH2(stack *s)
{
    int item;
    if(isfull(s))
printf("\n OVERFLOW \n");
    else
    {
printf("\n Enter item = ");
scanf("%d",&item);
        s->sp2--;
        s->a[s->sp2]=item;
    }
}
void POP1(stack *s)
{
    if(isempty1(s))
printf("\n UNDERFLOW\n");
    else
    {
printf("\n Popped item is =  %d",s->a[s->sp1]);
        s->sp1--;
    }
}
void POP2(stack *s)
{
    if(isempty2(s))
printf("\n UNDERFLOW\n");
    else
    {
printf("\n Popped item is =  %d",s->a[s->sp2]);
        s->sp2++;
    }
}
void PEEK1(stack *s)
{
    if(isempty1(s))
printf("\n Stack 1 UNDERFLOW\n");
    else
    {
printf("\n Peeked item is =  %d",s->a[0]);
    }
}
void PEEK2(stack *s)
{
    if(isempty2(s))
printf("\n Stack 2 UNDERFLOW\n");
    else
    {
printf("\n Peeked item is =  %d",s->a[s->sp2]);
    }
}
void DISPLAY(stack *s)
{
    int i;
    for(i=0;i<=s->sp1;i++)
printf("  %d   ",s->a[i]);

    for(i=s->sp1+1;i<=s->sp2-1;i++)
printf(" _ ");

    for(i=s->sp2;i<max;i++)
printf("  %d   ",s->a[i]);
}
void main()
{
    int choice;
    stack s;
createemptystack(&s);
while(1)
    {
printf("\n Enter 1 for PUSH from front");
printf("\n Enter 2 for PUSH from end");
printf("\n Enter 3 for POP from front");
printf("\n Enter 4 for POP from end");
printf("\n Enter 5 for PEEK from front ");
printf("\n Enter 6 for PEEK from end");
printf("\n Enter 7 for DISPLAY ");
printf("\n Enter 8 for EXIT");
printf("\n Enter your Choice= ");
scanf("%d",&choice);
        switch(choice)
        {
            case 1: PUSH1(&s);
                break;
            case 2: PUSH2(&s);
                break;
            case 3: POP1(&s);
                break;
            case 4: POP2(&s);
                break;
            case 5: PEEK1(&s);
                break;
            case 6: PEEK2(&s);
                break;
            case 7: DISPLAY(&s);
                break;

            case 8: exit(1);
            default: printf("\n Enter correct choice");
                break;
        }
    }
}






