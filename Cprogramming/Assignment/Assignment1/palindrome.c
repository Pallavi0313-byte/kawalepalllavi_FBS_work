void main()
{
	int num=123;
	int rev,temp=num,digit;
	
	while(temp>0)
	{
		digit=temp%10;
		rev=rev*10+digit;
		temp/=10;
	}
	if(rev==num)
	{
		printf("num is palindrome");
	}
	else
	{
		printf("num is not palindrome");
	}
}