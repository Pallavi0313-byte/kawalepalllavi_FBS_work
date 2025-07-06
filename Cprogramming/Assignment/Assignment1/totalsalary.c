#include<stdio.h>
void main()
{
	float bs,da,ta,hra,ts;
	printf("enter the bs salary");
	scanf("%f",&bs);
	if(bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.15;
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	ts=da+ta+hra+bs;
    printf("%f total salary",ts);
}