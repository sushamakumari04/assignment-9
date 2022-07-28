#include<stdio.h>
int main()
{
int n,num;
printf("menu\n");
printf("1.postive-negative\n");
printf("2.negative-positive\n");
printf("3.exit\n");
printf("enter a number");
scanf("%d",&n);
switch(n)
{
case 1:
    printf("enter a  +ve number\n");
    scanf("%d",&num);
    num=num*(-1);
    printf("the negative of a number is %d",num);
    break;
case 2:
    printf("enter a -ve number");
    scanf("%d",&num);
    num=num*(-1);
    printf("the positive of a number is %d",num);
    break;
default:
    printf("exit");
}

return 0;
}
