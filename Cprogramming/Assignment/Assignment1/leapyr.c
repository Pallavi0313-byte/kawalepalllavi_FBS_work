#include<stdio.h>
void main()
{
	int year=2005;
	
	if (year%4==0 &&year%100!=0||year%400==0)
	{
		printf("year is leap");
	}
	else
	{
		printf("year is not leap");
	}
}