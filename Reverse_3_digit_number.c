//reversing 3 digit number
#include<stdio.h>
void main()
{
	int a,x,y,z;
	printf("Enter a 3 digit number =");
	scanf("%3d",&a);
x=a%10;
a=a/10;
y=a%10;
a=a/10;
z=a%10;
 int revnum=x*100+y*10+z;
 printf("Reversed 3 digit number=%d\n",revnum);
}


