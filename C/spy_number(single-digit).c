#include <stdio.h>

void main()
{
	int n,i,fact_sum=0,fact_prod=1;
	
	printf("Enter any number: \n");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{
		if(n%i == 0)
		{
			fact_sum += i;
			fact_prod *= i;
		}
	}
	
	if((fact_sum == n) && (fact_prod == n))
		printf("Spy number\n");
	else
		printf("Not a spy number\n");
}
