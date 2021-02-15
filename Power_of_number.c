//Program to find power of n
#include<stdio.h>

int i,n,expo;
long power=1;

int itr_exp();
int rec_exp(int,int);

int main()
{
	printf("\nEnter the number");
	scanf("%d",&n);
	printf("Enter the exponent");
	scanf("%d",&expo);
	
	itr_exp();
	power=rec_exp(n,expo);
	printf("\n Using recursive function:\nFinal result of %d over %d=%ld\n",n,expo,power);

}

int itr_exp()
{
	for (i=1;i<=expo;i++)
	{
		power=power*n;
	}

	printf("\nUsing iteration function:\n Final result of %d over %d=%ld",n,expo,power);
}


int rec_exp(int n, int expo)
{ 
	static long power=1;
	if(expo>=1)
	{
		power=power*n;
		rec_exp(n,expo-1);	
	}
	else
	       return power;
}










