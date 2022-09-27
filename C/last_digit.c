#include <stdio.h>

void main()
{
	int a,r;
	
	printf("Enter any number: \n");
	scanf("%d",&a);
	
	r = a% 10;
	
	printf("Last digit of %d: %d\n",a,r);	
}
