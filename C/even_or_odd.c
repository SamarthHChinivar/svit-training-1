#include <stdio.h>

void main()
{
	int a;
	
	printf("Enter any number: \n");
	scanf("%d",&a);
	
	if(a%2 == 0)
		printf("Even number \n");
	else
		printf("Odd number \n");
}
