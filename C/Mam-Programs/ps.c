#include<stdio.h>

void main()
{
	int num;int i;int fact=1;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of a given number is:%d",fact);
}
