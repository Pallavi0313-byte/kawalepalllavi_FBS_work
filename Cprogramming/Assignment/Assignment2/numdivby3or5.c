
void main()
{
	int no;
	printf("enter a number:\n");
	scanf("%d",&no);
	
	if(no%3==0)
	{
		printf("number is divisible by 3 not by 5\n");
	}
	else if(no%5==0)
	{
		printf("no is divisible by 5 not by 3\n");
	}
	else if(no%3==0 && no %5==0)
	{
		printf("no is divisible by both");
	}
	else
	{
		printf("no is divisible by none\n");
	}
	
}