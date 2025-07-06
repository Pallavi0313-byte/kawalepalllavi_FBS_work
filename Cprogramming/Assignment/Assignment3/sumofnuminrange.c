void main()
{
	int start,end,sum=0;
	printf("enter start and end number:");
	scanf("%d%d",&start,&end);
	
	for(int i=start; i<=end;i++)
	{
		sum+=i;
	} printf("sum=%d\n",sum);
}