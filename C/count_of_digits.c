#include <stdio.h>

void main()
{
	int n, count = 0;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	while(n != 0)
	{
		n /= 10;
		count++;
	}
	
	printf("Number of digits: %d",count);	
}
