#include<stdio.h>

void main()
{
	int a=10;
	int b=a++ + a + a++;
	printf("%d\n%d",a,b);
}
