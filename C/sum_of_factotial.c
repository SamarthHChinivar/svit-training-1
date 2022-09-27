#include <stdio.h>

void main()
{
	int n,fact=1,sum=0;
	
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	int i;
	for(i=1; i<=n; i++)
	{
		fact *= i;
		sum += fact;
	}
	
	printf("Factorial: %d\n",sum);
}
