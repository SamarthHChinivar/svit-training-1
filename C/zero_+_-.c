#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter number: \n");
	scanf("%d",&n);
	
	if(n>0)
		printf("Positive Number \n");
	else if(n<0)
		printf("Negative Number \n");
	else
		printf("Zero \n");	
}
