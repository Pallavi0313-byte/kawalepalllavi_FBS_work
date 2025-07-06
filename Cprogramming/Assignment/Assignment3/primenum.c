#include<stdio.h>
void main()
   int no,flag;
   printf("enter a number");
   scanf("%d",&no);
   for(int i=1;i<=no;i++)
{
	if(no%i==0)
	{
		flag=1;
		break;
	}
}