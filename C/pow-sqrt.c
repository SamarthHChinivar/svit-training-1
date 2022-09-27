#include <stdio.h>
#include <math.h>

void main()
{
	float n;
	
	printf("Enter any number: \n");
	scanf("%f",&n);
	
	printf("Square root of %f: %f \n",n,sqrt(n));
	printf("Power of a %f: %f\n",n,pow(n,2));
}
