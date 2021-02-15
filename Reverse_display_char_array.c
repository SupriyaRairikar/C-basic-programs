// Program to implement display and reverse display feunction for character array element
//Iterative Approach
#include<stdio.h>
 int i,j,temp,n,m;
 char a[20];
int fun();
int rev();
int rec_fun(char *,int,int);
int rec_rev(char *,int,int);
int main()
{       printf("\nEnter no of elements in string\n");
        scanf("%d",&n);
        m=n;
        printf("\nEnter the characters in string\n");
        for(i=0;i<n;i++)
        {
                scanf("%c",&a[i]);
        }
        printf("\nUsing Iterative method \n");
        printf("\nYour string is\n");
        fun();
        printf("\nGiven string in reverse order is\n");
        rev();
        printf("\nUsing Recursive method \n");
        printf("\n Given string is \n");
        rec_fun(a,n,0);
        printf("\n String in reverse order \n");
        rec_rev(a,n,n-1);
}

int fun()
{       int i;
        for (i=0;i<n;i++)
        {
        printf("%c\t",a[i]);
        }
}
int rev()
{
        for(i=n-1;i>=0;i--)
        {
                printf("%c\t",a[i]);
        }
}
int rec_fun(char a[],int n,int index)
{
if(index!=n)
{printf("%c ",a[index]);
        rec_fun(a,n,index+1);
        }
else
printf("\n");
}
int rec_rev(char a[],int n,int index)
{int i;
if(index!=-1)
{
        printf("%c ",a[index]);
        rec_rev(a,n,index-1);
       }
else printf("\n");
}


