0//Program printing GCD and LCM
#include<stdio.h>
int main()
{
         int n1,n2,no1,no2,rem=0;
         printf("Enter the two non zero integers\n");
         scanf("%d%d",&no1,&no2);
          n1=no1;
	  n2=no2;
	  rem=no1%no2;
	  while (rem!=0)
	  {
		  no1=no2;
		  no2=rem;
		  rem=no1%no2;
	  }
		 
         printf("\n GCD of %d and %d is %d",n1,n2,no2);
	  printf("\n LCM of %d and %d is %d",n1,n2,((n1*n2)/no2));
}
        
