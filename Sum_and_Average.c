//Program to find sum and average of given n numbers
#include<stdio.h>
void main()
{
        int i,n,sum=0,numbers;
  printf("Enter how many numbers you want\n");
  scanf("%d",&n);
 printf("Enter the numbers one by one\n");
 for (i=0;i<n;i++)
 {
	 scanf("%d",&numbers);
	 sum=sum+numbers;

}
     float average=sum/n;
     printf("\nSum of the %d numbers=%d",n,sum);
     printf("\nAverage of the %d numbers=%f\n",n,average);
     }





