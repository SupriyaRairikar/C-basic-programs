// Program to find biggest number out of three using conditional operator
#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("\nEnter 3 numbers a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	

	n=(a>b)>(a>c)?(printf("\n a is the biggest number")):(b>c?(printf("\nb is the biggest number")):(printf("c is the biggest number")));
}

