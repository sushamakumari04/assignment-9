#include<stdio.h>
int main()
{
int var;
printf("enter the value of var");
scanf("%d",&var);
switch(var)
{
case 1:
     if(var==1)
     {
     printf("good");
     break;
     }
case 2:
     if(var==2)
     {
      printf("better");
      break;
     }
case 3:
     if(var==3){
      printf("best");
     }
default :
     printf("invalid");



}


return 0;
}
