#include <stdio.h>

void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("number is postive");
	}
	else if(n==0)
	{
		printf("number is zero");
	}
	else
	printf("number is negative");

}
