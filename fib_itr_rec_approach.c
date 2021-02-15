//program to print fibonacci series using iterative and recurssive function

#include<stdio.h>
int t1=0,t2=1,nt,i,n,x;

int itr_fib(int);
int rec_fib(int);

int main()
{
         printf("Enter the number of terms\n");
         scanf("%d,",&n);
	
        
	 printf("\n fibonacci series using iterative function\n");
 
	 itr_fib(n);
	
	 printf("\n fibonacci series using recursive function\n");
	 printf("%d\t",rec_fib(n));
}
int itr_fib(int n)
{
	for (i=1;i<=n;++i)
	{
		printf("%d\t",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
}
int rec_fib(int n)
{
      if (n<=1)
      {
	      return n;
      }
      
      return (rec_fib(n-1)+rec_fib(n-2));    
}






