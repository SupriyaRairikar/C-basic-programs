//Program to differentiate between pre and post decrement operators
#include<stdio.h>
int main()
{
	int k,i,y,x;
	float q,p;
	printf("\n Difference between pre and post operators\n");
	printf("Enter the value for k and i\n");
	scanf("%d%d",&k,&i);
	k=i++;
	printf("\n Result of operation k=i++ :\n value of k:%d\n value of i:%d",k,i);
	k=++i;
	printf("\n Result of operation k=++i :\n value of k:%d\n value of i :%d",k,i);

	//
	printf("\n Difference between pre and post operators\n");
        printf("Enter the value for y and x\n");
        scanf("%d%d",&y,&x);
        y=x++*10;
        printf("\n Result of operation y=x++*10 :\n value of y:%d\n value of x:%d",y,x);
        y=++x*10;
        printf("\n Result of operation y=++x*10 :\n value of y:%d\n value of x :%d",y,x);

	//
	printf("\n Difference between pre and post operators\n");
        printf("Enter the value for q and p\n");
        scanf("%f%f",&q,&p);
        q=p--/3;
        printf("\n Result of operation q=p--/3 :\n value of q:%f\n value of p:%f",q,p);
        q=--p/3;
        printf("\n Result of operation q=--p/3 :\n value of q:%f\n value of p :%f",q,p);

}



