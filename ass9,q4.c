#include<stdio.h>
int main()
{
int a,b,c,n;
printf("Menu");
printf("1.Isosceles triangle\n");
printf("2.Right angle triangle\n");
printf("3.Equilateral triangle\n");
printf("4.enter the choice\n");
scanf("%d",&n);
printf("Enter the lengths of a triangle\n");
scanf("%d%d%d",&a,&b,&c);

switch(n)
{
case 1:
    if(a==b||b==c||c==a)
        {
         printf("isosceles triangle ");
         break;
        }
        else{
            printf("not a isoceles");
            break;
        }
case 2:
     if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b){
         printf("right angle triangle");
         break;}
    else{
        printf("not a rat");
        break;
    }

case 3:
    if(a==b&&b==c)
        {
        printf("equilateral triangle");
        break;
        }
        else{
            printf("not a equilateral triangle");
        }
default:
    printf("Exit");
    break;

}
return 0;
}
