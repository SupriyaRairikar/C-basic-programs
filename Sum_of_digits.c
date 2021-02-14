//Program to have recursive sum of digits in a number
#include<stdio.h>
int main()
{
         int n,num,sum,x;
	 printf("Enter the number\n");
	 scanf("%d",&n);
        
	 
	 while(n>9)
	 {
	 	sum=0;
	 	while(n>0)
	 	{
		 	x=n%10;
		 	n=n/10;
		 	sum=sum+x;
	 	}
	 	n=sum;
	//printf("sum of digits=%d\n",n);
	 }
	  printf("sum of digits=%d\n",n);

}
