//Program to implement a choice based arithmetic calculator
#include<stdio.h>

//int res;//declaration of functions
int sum(int,int);
int div(int,int);
int sub(int,int);
int mul(int,int);
int main(void)
{   

	int n,a,b;
	printf("\n Arithmetic calculator\n Enter your choice\n 1.ADD\n 2.SUB\n 3.MUL\n 4.DIV\n ");
	scanf("%d",&n);
	printf("\n Enter the two numbers\n");
	scanf("%d\n%d",&a,&b);


	switch(n)
	{
		case 1:
		        sum(a,b);
			break;
                case 2:
                       sub(a,b);
			 break;

		case 3:
	
                        mul(a,b);
			 break;

		case 4:
                        div(a,b);
			 break;

		Default:
                        
                        printf("\n Enter valid numbers\n");
	}
}
int sum(int a,int b)
{//	res=a+b;
         printf("\n Addition is %d\n",a+b);

}
int sub(int a,int b)
{	//res=a-b;
        printf("\n Subtraction is %d\n",a-b);  
}
int mul(int a,int b)
{	//res=a*b;
        printf("\n Multiplication is %d\n",a*b);
}
int div(int a,int b)
{	//res=a/b;
        printf("\n Division is %d\n",a/b);
}








