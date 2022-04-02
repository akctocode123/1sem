#include <stdio.h>
int main()
{
 int a[20][20],b[20][20],c[20][20];
 int i,j,k,m,n,p,q;
 printf("Enter the no of rows and columns for matrix 1:-");
 scanf("%d%d",&m,&n);
 printf("Enter the elements in matrix 1");
 for(i=0;i<m;i++)
 {
  for(j=0;i<n;j++)
  { 
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter the elements of matrix 2");
 for(i=0;i<p;i++)
 {
  for(i=0;i<q;i++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("Enter the no of rows and columns for matrix 2:-");
 scanf("%d%d",&p,&q);
 if (n!=p)
 {
  printf("Matrix multiplication not possible");
 }
 else
 {
  for(i=0;i<n;i++)
  { 
   for(j=0;j<p;j++)
   {
    c[i][j]=0;
    for(k=0;k<n;k++)
    {
     c[i][j]=c[i][j]+a[i][k]+b[k][j];
    }
   }
  }
  printf("Product of matrix 1 and 2\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<q;j++)
   {
    printf("%d\t\n",c[i][j]);
   }
  }
 }
 return 0;
}      
