//Biggest of 3 input numbers
#include<stdio.h>
void main()
{
	printf("Enter the three numbers a,b,c=\n");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d\tb=%d\tc=%d\t",a,b,c);
	if (a>b)
	{
          if(a>c)
	  {
		  printf("a is the greatest number\n");
               }
	  else {
		  printf("c is the greatest number\n ");
	  }
	}
	else if(b>c)
		printf("b is the greatest number\n");
	else 
		printf("c is the greatest number\n");
}



