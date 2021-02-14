//Program printing whether the number is perfect or not
#include<stdio.h>
int main()
{
         int i, num,sum=0;
	 printf("\n Enter any number\n");
	 scanf("%d",&num);

	 for(i=1;i<num;i++)
	 {
		if(num%i==0)
			sum=sum+i;
	 }
	 if (sum==num)
		 printf("%d is a perfect number\n",num);
	 else
	 printf("%d is not a perfect number\n",num);

}

