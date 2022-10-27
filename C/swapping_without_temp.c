#include <stdio.h>

void main()
{
	int a,b;

	printf("Enter any two numbers (first number > second number): \n");
	scanf("%d%d",&a,&b);
	
	printf("Before swapping, values of a and b are %d and %d\n",a,b);
	
	/*swapping*/
	a = a-b;
	b = a+b;
	a = b-a;
	
	printf("After swapping, values of a and b are %d and %d\n",a,b);
}
