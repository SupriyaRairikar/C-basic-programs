//program to check whether the given no is armstrong no or not

#include<stdio.h>
void main()
{
        int num,originalnum,re,n=0;
        float result=0.0;
        printf("Enter the 3 digit number :");
        scanf("%3d",&num);

        originalnum=num;

        while(originalnum!=0)
        {
                re=originalnum % 10;
                result +=re*re*re;
                originalnum/=10;
        }

        if((int)result==num)
                printf("\n%d is an armstrong number\n",num);
        else
                printf("\n%d is not an armstrong number\n",num);
}


