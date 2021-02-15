//program using formatted I/O using printf
#include<stdio.h>
int main()
{ int n;
	float m;
	printf("\n Enter the number :\n");
	scanf("%d",&n);
	printf("\n Enter the float number :\n");
	scanf("%f",&m);

	printf("\nDifferent printing formats :\n");
	printf("\nInteger format using 5d is %5d",n);
	 printf("\nInteger format using 05d is %05d",n);
	  printf("\nInteger format using -5d is %-5d",n);
	   printf("\nInteger format using 8.2f is %8.2f",m);
	    printf("\nInteger format using .2f is %.2f",m);

}


