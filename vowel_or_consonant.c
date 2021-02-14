//Program to find given character is vowel or no
#include<stdio.h>
void main()
{
        char c;
	int lower,upper;
	printf("Enter the alphabet=\n");
	scanf("%c",&c);
	lower=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
 	upper=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
	if(lower||upper)
	{
		 printf("%c is a vowel\n",c);
	}else
		printf("%c is a consonant\n",c);

}





