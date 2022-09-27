#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int n,i;
	
	printf("Enter any number: \n");
	scanf("%d",&n);
	
	if(n==1 || n==2)
		printf("Prime Number\n");
	
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			printf("Non Prime Number\n");
			exit(0);
		}
	}
	
	printf("Prime Number\n");
}
