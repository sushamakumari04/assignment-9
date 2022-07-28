#include<stdio.h>
int main()
{
int choice,year;
printf("1. century year\n");
printf("2. non-century year\n");
printf("3. invalid\n");
printf("Enter the year\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%400==0){
        printf("leap year");
        break;}
    else{
        printf("not a leap year");
        break;
    }

case 2:
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("leap year");
        break;
    }
    else{
        printf("not a leap year");
        break;
    }
default :
     printf("invalid year");
     break;

}

return 0;
}
