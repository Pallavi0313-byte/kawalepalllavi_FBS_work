#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("%c is uppercase character\n",ch);
		
	}
	else if(ch>='a'&& ch<='z')
	{
		printf("%c is lowrcase character\n",ch);
	}
	else
	{
		printf("%c is not a character",ch);
	}
}