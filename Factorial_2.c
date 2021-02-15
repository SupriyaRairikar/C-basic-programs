//Program to calculate the factorial of a number
#include<stdio.h>
int i,n;
        unsigned long long f=1;
int itr_fact(int);
int rec_fact(int);

int main()
{
       // int i,n;
       // unsigned long long f=1;
        printf("Enter an integer =\t");
        scanf("%d",&n);
	printf("\n Factorial using iterative function\n");

	 itr_fact(n);
	printf("\n Factorial using recursive function\n");

	int  x=rec_fact(n);
	 printf("%d\n",x);
}
int itr_fact(int n)
{
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
int rec_fact(int n)
{
	
	if (n<0)
		printf("Factorial does not exist\n");
	else if (n>=1)
	{
	return 	n*rec_fact(n-1);
	}
	else
	{
		return 1;
	}
}


	


