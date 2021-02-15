//Implement gcd using iterative method

#include<stdio.h>
int n1,n2,no1,no2,i,gcd,x,y,rem;

int itr_gcd(int,int);
int rec_gcd(int,int);

int main()
{
         printf("Enter the two non zero integers\n");
         scanf("%d%d",&no1,&no2);
	 
	 n1=no1;
	 n2=no2;
	 x=no1;
	 y=no2;
	 
	 int itr_gcd(int no1,int no2);
	printf("\n GCD of %d and %d is %d using iterative function \n",n1,n2,no2);


	printf("\n GCD of %d and %d is %d using recursive function \n",n1,n2,rec_gcd(x,y));
}
int itr_gcd(int no1,int no2)
{
         rem=no1%no2;
	 while(rem!=0)
	 {
		 n1=no1;
		 no2=rem;
		 rem=no1%no2;
	 }
	 
}
int rec_gcd(int x,int y)
{
	if(y!=0)
		return rec_gcd(y,x%y);
	else
		return x;
 	}














