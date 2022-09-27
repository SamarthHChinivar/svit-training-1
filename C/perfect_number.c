#include <stdio.h>

void main()
{
	int n,i,prev_fact=0;
	
	printf("Enter any number: \n");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{
		if(n%i == 0)
			prev_fact += i;
		
	}
	
	if(prev_fact == n)
		printf("Perfect number\n");
	else
		printf("Not a perfect number\n");
}
