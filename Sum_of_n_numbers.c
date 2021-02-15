//ass4-3 write a program to find sum of n numbers
//iterative approach
//recursive approach
 #include<stdio.h>

int itr_sum(int);
int rec_sum(int);

int main()
{
	int n,sum;
	printf("\nHow many numbers :\n");
	scanf("%d",&n);
	sum=itr_sum(n);
	printf("\nSum of numbers using iterative method : %d",sum);
	sum=rec_sum(n);
	printf("\nSum of numbers using recursive method : %d",sum);
	return 0;
}
int itr_sum(int n)
{
	int num,i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number:\n");
		scanf("%d",&num);
		sum=sum+num;
	}
	return sum;
}
int rec_sum(int n)
{
	int num,i;
	static int sum=0;
	if(n>0)
	{
		printf("\nEnter number :\n");
		scanf("%d",&num);
		sum=sum+num;
		rec_sum(n-1);
	}
	return sum;
}





