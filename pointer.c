#include <stdio.h>
#include <math.h>
int main()
{
 float a[10],sum=0,mean=0,var=0,sd=0;
 float *p;
 p=a;
 int n,i;
 printf("\nEnter the number of elements:\n");
 scanf("%d",&n);
 printf("\nEnter the elements:\n");
 for(i=0;i<n;i++)
  {
   scanf("%f",p);
   p++;
  }
 p=a;
 for(i=0;i<n;i++)
  {
   sum=sum+(*p);
   p++;
  }
 mean=sum/n;
 p=a;
 for(i=0;i<n;i++)
  {
   var=var+pow(mean-(*p),2);
   p++;
  }
 var=var/n;
 sd=sqrt(var);
 printf("Sum = %f\n Mean = %f \n Varience = %f \n StandDav = %f",sum,mean,var,sd);
 return 0;
} 
  
