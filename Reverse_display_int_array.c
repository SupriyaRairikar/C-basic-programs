// Program to implement display and reverse display feunction for integer array element
//Iterative Approach
#include<stdio.h>
 int i,j,temp,n,m,a[20],b[20];
int fun();
int rev();
int rec_fun(int *,int,int);
int rec_rev(int *,int,int);
int main()
{	printf("\nEnter no of elements in array\n");
	scanf("%d",&n);
	m=n;
	printf("\nEnter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nUsing Iterative method \n");
	printf("\nYour array is\n");
       	fun();
	printf("\nGiven array in reverse order is\n");
	rev();
	printf("\nUsing Recursive method \n");
	printf("\n Given array is \n");
	rec_fun(a,n,0);
	printf("\n Array in reverse order \n");
	rec_rev(a,n,n-1);
}

int fun()
{	int i;
       	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int rev()
{
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
int rec_fun(int a[],int n,int index)
{
if(index!=n)
{printf("%d ",a[index]);
	rec_fun(a,n,index+1);
	}
else
printf("\n");
}
int rec_rev(int a[],int n,int index)
{int i;
if(index!=-1)
{
        printf("%d ",a[index]);
        rec_rev(a,n,index-1);
       }
else printf("\n");
}






