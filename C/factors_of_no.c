#include <stdio.h>

void main()
{
	int n;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	printf("Factors of %d: \n",n);
	int i;
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
			printf("%d ",i);
	}
	
}
