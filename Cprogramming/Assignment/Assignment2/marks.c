#include<stdio.h>
void main()
{
	int marks;
	
	printf("enter your marks");
	scanf("%d",&marks);
	if(marks>75)
	{
		printf("result:Distinction");
	}
	else if(marks>65)
	{
		printf("result:First Class");
	}
	else if(marks>55)
	{
		printf("result:Second Class");
	}
	else if(marks>=40)
	{
		printf("result:Pass Class");
	}
	else
	{
		printf("result:Fail");
	}
}