#include<stdio.h>
int main()
{
int n;
printf("enter the day number");
scanf("%d",&n);
switch(n)
{
case 1:
      printf("good morning monday");
      break;
case 2:
      printf("good morning tuesday");
      break;
case 3:
     printf("good morning wednesday");
     break;
case 4:
     printf("good morning thursday");
     break;
case 5:
     printf("good morning friday");
     break;
case 6:
     printf("good morning saturday");
     break;
case 7:
     printf("good morning sunday");
     break;
case 8:
     printf("enter valid day number");
     break;
}

return 0;
}
