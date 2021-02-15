// Program for number conversion
#include<stdio.h>
int main()
{
//decimal to binary conversion
	int n,i,a[20],b[20],c[20],m,k;
	printf("\nEnter a decimal number\n");
	scanf("%d",&n);
	m=n;
	k=n;
	for (i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
		
	}
	printf("\nBinary conversion is\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
}
//decimal to Octal conversion

for (i=0;m>0;i++)
        {
                b[i]=m%8;
                m=m/8;

        }
        printf("\nOctal conversion is\n");
        for(i=i-1;i>=0;i--)
        {
                printf("%d",b[i]);
}
printf("\n");

//decimal to Hexadecimal conversion
     
for (i=0;k>0;i++)
        {
                c[i]=k%16;
                k=k/16;

        }
        printf("\nhexadecimal conversion is\n");
        for(i=i-1;i>=0;i--)
        {
                printf("%d",c[i]);
}
printf("\n");



}

