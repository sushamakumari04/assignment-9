#include<stdio.h>
int main()
{
int n,a,b,c;
printf("Menu");
printf(" 1. Addition ");
printf(" 2. Subtraction ");
printf(" 3. Multiplication ");
printf(" 4. Division ");
printf(" 5. Exit");
printf("enter the char choice");
scanf("%d",&n);
//printf("enter your choice");
//scanf("%d",&op);
switch(n)
{
 case 1:

        printf("enter two number");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("%d",c);
        break;
case 2:

        printf("enter two number");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("%d",c);
        break;
case 3:

        printf("enter two number");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("%d",c);
        break;
case 4:

        printf("enter two number");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("%d",c);
        break;
case 5:
     printf("Exit");
     break;

}

return 0;
}
