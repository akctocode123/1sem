#include <stdio.h>
int main()
{
 struct student
 {
  int rollno, sem;
  char name[20];
  float m1,m2,m3,m4,m5,Avg;
 };
 int N,i;
 printf("Enter the no of students\n");
 scanf("%d",&N);
 struct student S[N];
 printf("Enter %d student information\n",N);
 for(i=0;i<N;i++)
 {
  printf("Enter rollno:");
  scanf("%d",&S[i].rollno);
  printf("Enter sem");
  scanf("%d",&S[i].sem);
  printf("Enter name:");
  scanf("%s",S[i].name);
  printf("Enter five subject marks:");
  scanf("%f%f%f%f%f",&S[i].m1,&S[i].m2,&S[i].m3,&S[i].m4,&S[i].m5);
  S[i].Avg=(S[i].m1+S[i].m2+S[i].m3+S[i].m4+S[i].m5)/5.0;
  };
  for(i=0;i<N;i++)
  {
   if(S[i].Avg>35.0)
   {
    printf("%s\t%d\t%f\n",S[i].name,S[i].rollno,S[i].Avg);
    printf("student above average are\n");
   }
  }
  for (i=0;i<N;i++)
  {
   if(S[i].Avg<=35.0)
   {
    printf("%s\t%d\t%f\n",S[i].name,S[i].sem,S[i].Avg);
    printf("Student below average are\n");
   }
  }
 return 0;
}
