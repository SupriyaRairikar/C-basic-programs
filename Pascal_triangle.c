//program to print pascal triangle
#include<stdio.h>
int fact(int);
int main()
{
	int i,j,n,c=1,k;
	printf("Enter the steps of Pascal Triangle :\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	for(k=1;k<=n-i;k++)	

	printf(" ");
	for(j=0;j<=i;j++)	
	{
		if(j==0 || i==0)
			c=1;
		else
			c=c*(i-j+1)/j;
		printf("%4d",c);
	}
	printf("\n");
	}

}
