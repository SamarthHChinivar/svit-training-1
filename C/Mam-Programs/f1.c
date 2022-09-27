#include<stdio.h>

int c_developer();

int c_developer(int a,int b)
{
	
	return a*b;
	
}

void main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("main begins\n");
	int res=c_developer(a,b);
	printf("the multiplication of 2 numbers is: %d\n",res);
	printf("main ends\n");
}
