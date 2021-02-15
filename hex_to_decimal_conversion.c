//Hexa decimal to decimal conversion Using power function:
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int i=0,num=0, l;
	char str[20];
	printf("Enter hex number\n");
	scanf("%s",str);
	l=strlen(str);
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case '1':
				num=num+1*pow(16,l-i-1);
				break;
			case '2':
                                num=num+2*pow(16,l-i-1);
                                break;
			case '3':
                                num=num+3*pow(16,l-i-1);
                                break;
			case '4':
                                num=num+4*pow(16,l-i-1);
                                break;
			case '5':
                                num=num+5*pow(16,l-i-1);
                                break;
			case '6':
                                num=num+6*pow(16,l-i-1);
                                break;
			case '7':
                                num=num+7*pow(16,l-i-1);
                                break;
			case '8':
                                num=num+8*pow(16,l-i-1);
                                break;
			case '9':
                                num=num+9*pow(16,l-i-1);
                                break;
			case 'a':
			case 'A':	
                                num=num+10*pow(16,l-i-1);
                                break;
			case 'B':
			case 'b':
                                num=num+11*pow(16,l-i-1);
                                break;
			case 'c':
			case 'C':	
                                num=num+12*pow(16,l-i-1);
                                break;
			case 'd':
			case 'D':
                                num=num+13*pow(16,l-i-1);
                                break;
			case 'e':
			case 'E':	
                                num=num+14*pow(16,l-i-1);
                                break;
			case 'f':
			case 'F':
				num=num+15*pow(16,l-i-1);
                                break;
		}
		i++;
	}
	printf("Decimal equivalent is %d\n",num);
	return 0;
}

	
