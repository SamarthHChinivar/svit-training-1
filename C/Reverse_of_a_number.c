#include <stdio.h>

void main()
{
	int n,dig=0,rev=0;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	while(n != 0)
	{
		dig = n%10;
		rev = rev*10 + dig;
		n /= 10;
	}
	
	printf("Number of digits: %d",rev);	
}
