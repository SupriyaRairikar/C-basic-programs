//Program to count no of 0's and 1's in a binary code
#include<stdio.h>

int itr_bin(int *);
int rec_str(int *);

int i,zeros=0,ones=0,bit_string[20];
int main()
{
	printf("\nEnter binary number");
	for (i=0;i<20;i++)
		scanf("%d",bit_string[i]);

	itr_bin(bit_string[i]);
	printf("\nUsing iterative function:\n Number of zeros=%d and Number of ones=%d",zeros,ones);

	rec_bin(bit_string[i]);
	printf("\nUsing recursive function:\n Number of zeros=%d and Number of ones=%d",zeros,ones);

}

int itr_bin(int *bit_string)
{

	for (i=0;i<10;i++)
	{
		if(bit_string[i]==1)
			++ones;
		else
			++zeros;
	}
}

int rec_bin(int *bit_string)
{
	static int i=0;
	
	if(i<10)
	{
		if(bit_string[i]==1)
			++ones;
		else
			++zeros;
	}
	i++;
	rec_bin(bit_string[i-1]);
}

