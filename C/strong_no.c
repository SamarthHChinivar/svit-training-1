#include <stdio.h>

int factorial(int n)
{
	int i,fact=1;
	
	for(i=1; i<=n; i++)
		fact = fact * i;
	
	return fact;
}

void main()
{
	int n,fact=1,sum=0,dig=0,i,strong;
	
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	strong = n;
	
	while(n != 0)
	{
		dig = n%10;
		fact = factorial(dig);
		sum += fact;
		n /= 10;
	}
	
	if(strong == sum)
		printf("Strong Number\n");
	else
		printf("Not a strong number\n");
}
