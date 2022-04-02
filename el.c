#include <stdio.h>
#include <math.h>
int main()
{
 char name[10];
 float units,charges,total;
 printf("Enter the name:");
 gets(name);
 printf("Enter the number of units consumed:");
 scanf("%f",&units);
 if(units>=100 && units<=200)
 {
  charges=0.8*units;
 }
 else if(units>200 && units<=300)
 {
  charges=(200*0.8)+((units-200)*0.9);
 }
 else if(units>=300)
 {
  charges=(200*0.8)+(100*0.9)+(units-300)*1;
 }
 total=charges+100;
 if(total>400)
 {
  total=total+(0.15*total);
 }
 printf("\t\t\tElectricity bill\n");
 printf("\t\t\tName of the user: %s\n",name);
 printf("The total bill the user have to pay is:%f\n",total);

 return 0;
}


 


