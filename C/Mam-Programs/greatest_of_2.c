#include <stdio.h>

void main()
{
	int a,b;
	
	printf("Enter tow numbers: \n");
	scanf("%d%d",&a,&b);
	
	if(a>=b)
		printf("Largest Number: %d\n",a);
	else
		printf("Largest Number: %d\n",b);
}
