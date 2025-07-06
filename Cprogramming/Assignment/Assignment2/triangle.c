#include<stdio.h>
void main() {
	int s1,s2,s3;

	printf("enter three sides of triangle");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2&&s2==s3)
	
		printf("triangle is equilateral");
		
	else if(s1==s2||s1==s3||s2==s3)
	
		printf("triangle is isosceles\n");
	else
		printf("triangle is scalene\n");
}