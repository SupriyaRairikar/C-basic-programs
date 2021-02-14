//program for calculating grade of the student based on marks in subjects
//if else case
//basic array implementation
#include<stdio.h>
int main()
{
       	int n,i,total=0,a[20];
	printf("Enter the number of subjects:\n");
	scanf("%d",&n);
       printf("Enter marks of %d subjects\n",n);
        for(i=1;i<=n;i++)
	{
       scanf("%d",&a[i]);
		total=total+a[i];
	}

      float avg=total/n;
      printf("\nPercentage=%f\n",avg);

      if(avg>80)
      {	      printf("\nGrade A\n");}
      else if(avg<80 || avg>70)
      { printf("\nGrade B\n");}
      else if(avg<70 || avg>60)
      {  printf("\nGrade C\n");}
       else if(avg<60 || avg>45)
       {  printf("\nGrade D\n");}
        else
	{  printf("\nFail\n");
      }
}







