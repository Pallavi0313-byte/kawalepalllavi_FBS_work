#include<stdio.h>
void main()
{
	double price;
	char student;
	printf("enter a price");
	scanf("%If",&price);
	fflush(stdin);
	printf("are you a student y or n");
	scanf("%c",&student);
	double  totalprice;
	
	if(student=='y')
	{
		if(price>500)
	
			totalprice=price-price*0.20;
	
		else
		
			totalprice=price-price*0.10;
		}
		else
		{
			if(price>600)
			totalprice=price-price*0.15;
		else
			totalprice=price;
			
		}
			printf(" %If totalprice",totalprice);
	     
}