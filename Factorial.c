//Program to calculate the factorial of a number
#include<stdio.h>
void main()
{
        int i,n;
	unsigned long long f=1;
	printf("Enter an integer =\t");
	scanf("%d",&n);
	if(n<0)
		printf("Factorial does not exist\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			f*=i;
		}
		printf("Factorial of %d = %llu\n",n,f);
	}
     }

