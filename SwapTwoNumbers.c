//swap of two numbers without using third variable
#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter first no a=\n");
	scanf("%d",&a);
	printf("Enter second no b=\n");
	scanf("%d",&b);

	 a=a+b;
	 b=a-b;
	 a=a-b;

	 printf("After swapping\n a=%d\n b=%d\n",a,b);
}
