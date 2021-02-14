//Program to find given year is leap year or not
#include<stdio.h>
void main()
{
        int yr;
         printf("Enter any year\n");
	 scanf("%d",&yr);
	 if(yr%400==0)
	 printf("%d is a leap year\n",yr);
	 else if(yr%100==0)
		 printf("%d is a leap not year\n",yr);
	 else if(yr%4==0)
                 printf("%d is a leap year\n",yr);
	 else
                 printf("%d is a leap not year\n",yr);
}





