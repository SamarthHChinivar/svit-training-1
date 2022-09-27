#include <stdio.h>

 int c_developer(int a, int b)
{
	return a*b;
}

void main()
{
	int a,b,r;
	
	printf("Enter values of a and b: \n");
	scanf("%d%d",&a,&b);
	
	r = c_developer(a,b);
	printf("Result: %d\n",r);
}
