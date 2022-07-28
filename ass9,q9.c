#include<stdio.h>
int main()
{
int n;
printf("enter an even number");
scanf("%d",&n);
switch(n%2==0)
{
case 1:
   n=n+1;
   printf("%d",n);
   break;
case 0:
    printf("enter the valid number");
    break;
}

return 0;
}
