/*C program to count digits using iteration and recursion.*/

#include <stdio.h>
//int itr_count(int);
//int rec_count(int);

int itr_count(int number)
{
	static int count=0;

	for(count=0;number>0;count++)
	{
		number=number/10;

	}
	return count;
}
//function to count digits
int rec_count(int number)
{
    static int count=0;

    if(number>0)
    {
        count++;
        number=number/10;
        rec_count(number);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count;

    printf("Enter a positive integer number: ");
    scanf("%d",&number);

    count=rec_count(number);

    printf("Using recursion function :\nTotal digits in number %d is: %d\n",number,count);

    count=itr_count(number);

    printf("Using iteration function :\nTotal digits in number %d is: %d\n",number,count);
    return 0;
}



