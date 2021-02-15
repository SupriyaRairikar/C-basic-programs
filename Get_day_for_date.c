//Program to find day of week based on refernce date

#include<stdio.h>
int main()
{
int dd,mm,yyyy,years,months,days=0;
int leapyears=0,y,day;

printf("Enter date in dd/mm/yyyy format\n");
scanf("%d/%d/%d",&dd,&mm,&yyyy);
years=yyyy-1970;
y=1970;
while(y<yyyy)
{
	if(y%4==0 && y%4!=100 || y%400==0)
		leapyears++;
	y++;
}
days=days+leapyears*366;
years=years-leapyears;
days=days+years*365;

switch (mm)
{
	case 12:
		days=days+30;
	case 11:
		days=days+31;
	case 10:
		days=days+30;
	case 9:
		days=days+31;
	case 8:
		days=days+30;
	case 7:
                days=days+31;
	case 6:
               days=days+30;
	case 5:
		days=days+31;
	case 4:
		days=days+30;
	case 3:
		if(yyyy%4==0 && yyyy%4 !=100 || yyyy%400==0)
		
			days=days+29;
		else
			days=days+28;
	case 2:
		days=days+31;
}
	days=days+dd-1;
	printf("days difference is %d\n",days);

	day=days%7;
	printf("The day on given date is =");
	switch(day)
{
	case 0:
		printf("Thursday\n");
		break;
	case 1:
		printf("Friday\n");
		break;
	case 2:
		printf("Saturday\n");
		break;
	case 3:
		printf("Sunday\n");
		break;
	case 4:
		printf("Monday\n");
		break;
	case 5:
		printf("Tuesday\n");
		break;
	case 6:
		printf("Wednesday\n");
		break;
	}
}



