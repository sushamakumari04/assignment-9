#include<stdio.h>
int main()
{
 int units,bill=0,totalbill=0,surcharge;
 printf("enter the number of units");
 scanf("%d",&units);

 switch(units<=50)
 {
  case 1:
         bill=units*0.50;
         break;
  case 0:
         switch(units<=150)
         {
           case 1:
                bill=25+(units-50)*0.75;
                break;
           case 0:
                switch(units<=250)
                {
                 case 1:
                     bill=100+(units-150)*1.20;
                     break;
                case 0:
                     bill= 220+(units-250)*1.50;
                     break;
                }
            break;
        }
    break;
}
surcharge=bill*0.20;
totalbill= surcharge+bill;
printf("total bill is %d",totalbill);


 return 0;
}
