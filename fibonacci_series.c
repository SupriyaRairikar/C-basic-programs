//Program printing fibonacci series
 #include<stdio.h>
int main()
{
	 int i,n,t1=0,t2=1,nt;
	 printf("Enter the no of terms\n");
	 scanf("%d",&n);

	 printf("Fibonacci Series-->\n ");
	 for(i=1;i<=n;++i)
	 {
		 printf("%d ",t1);
		 nt=t1+t2;
		 t1=t2;
		 t2=nt;
	 }
	 printf("\n");
}
