//program to check whether the given no is prime no or not

#include<stdio.h>
void main()
{
        int num,i,flag=0;
        
        printf("Enter the positive number :");
        scanf("%d",&num);

        for(i=2;i<=num/2;++i)
	{
		if(num%i==0)
		{flag=1;
			break;
		}
        }
	if(num==1)
	{printf("1 is neither prime nor composite\n");}

        if(flag==0)
                printf("\n%d is an prime number\n",num);
        else
                printf("\n%d is not a prime number\n",num);
}


