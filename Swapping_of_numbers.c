//Program to swap two numbers with , without temp variable and using xor operator
#include<stdio.h> 
void main()
{
	int a,b,temp,m,n,i,j;
	printf("\n Enter the first number a=\n");
	scanf("%d",&a);
	printf("\n Enter the second number b=\n");
	scanf("%d",&b);
	m=a;
	n=b;
	i=a;
	j=b;
	//using temp var
	printf("Before swapping\n a=%d\n b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Swapping using temperory variable\n a=%d\n b=%d\n",a,b);

	//without using temp var
	printf("Before swapping\n a=%d\n b=%d\n",m,n);
        m=m+n;
        n=m-n;
        m=m-n;
        printf("Swapping without using temperory variable\n a=%d\n b=%d\n",m,n);

	//using xor operation
        printf("Before swapping\n a=%d\n b=%d\n",i,j);
        i=i^j;
	j=i^j;
	i=i^j;
        printf("Swapping without using temperory variable\n a=%d\n b=%d\n",i,j);


}




