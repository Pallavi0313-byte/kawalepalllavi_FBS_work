void main()
{
	int num=12345,first,last;
	
	last=num%10;
	
	while(num>+10)
		num/=10;
	first=num;
	printf("sum=%d\n",first+last,first,last);
}