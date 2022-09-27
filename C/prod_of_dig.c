#include <stdio.h>

void main()
{
	int n, prod=1, dig=0;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	while(n != 0)
	{
		dig = n%10;
		prod *= dig;
		n /= 10;
	}
	
	printf("Number of digits: %d",prod);	
}
