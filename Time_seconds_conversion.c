// Program to convert time between hh:mm:ss format and total number of seconds
#include<stdio.h>
int main()
{
	int hh,mm,ss,ts;

	printf("\nEnter the  hours");
	scanf("%d",&hh);
	printf("\n Enter the minutes");
	scanf("%d",&mm);
	printf("\n Enter the seconds");
	scanf("%d",&ss);
	ts=ss+(mm*60)+(hh*60*60);
	printf("\nTotal number of seconds=%d",ts);

	//
	printf("\n Enter number of seconds to convert it into hh:mm:ss format\n");
	scanf("%d",&ts);
	int c=0;
	hh=ts/3600;
	mm=ts-(hh*3600);
	for(;mm>=60;)
	{	mm=mm-60;
	c=c+1;}
		ss=mm;
	
	printf("\nHours=%d  mins=%d  seconds=%d",hh,c,ss);


}

