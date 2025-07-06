void main()
{
	int num=26,sum=0;
    {	
	for(int i=1; i<num; i++)
		if(num%i==0)
			sum+=i;
	}
	if(sum==num)
		printf("perfect\n");
	else
		printf("not  perfect\n"); 
			
	
	
}