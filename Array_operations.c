//C program based on integer array to find sum,average,min element,max element
#include<stdio.h>
int main()
{
	int i,n,sum=0,min,max,a[20];
	printf("\nEnter the no of elements\n");
	scanf("%d",&n);
	printf("\nEnter the array elements\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nYour array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\nSum of array elements is");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\n%d",sum);
	float avg= sum/n;
	printf("\nAverage of array elements is %f",avg);
	//min
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMinimum element is %d",min);
	
	//max
	
        max=a[0];
        for(i=0;i<n;i++)
        {
                if(a[i]>max)
                {
                        max=a[i];
                }
        }
        printf("\nMaximum element is %d",max);
}



