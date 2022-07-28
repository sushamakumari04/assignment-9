#include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,i;
float D=0,x1,x2;
printf("enter the coefficient of quadratic equation");
scanf("%d%d%d",&a,&b,&c);
 D=b*b-(4*a*c);
 switch(D>=0)
 {
  case 1:
     switch(D>0)
     {
       case 1:
            x1=( -b+sqrt(b*b-(4*a*c)) )/2*a;
            printf("%f ",x1);
            x2=(-b+sqrt(b*b-(4*a*c)))/2*a;
            printf("%f ",x2);
            break;

      case 0:
           x1= -b/(2*a);
           printf("%f ",x1);
           x2= -b/(2*a);
           printf("%f ",x2);
           break;
    }
case 0:
     x1= (-b/2*a) +(sqrt(4*a*c-b*b))*i/2*a;
     printf("%f ",x1);
     x2= (-b/2*a)-(sqrt(4*a*c-b*b))*i/2*a;
     printf("%f ",x2);
     break;
 }


return 0;
}
