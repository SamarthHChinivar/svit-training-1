#include <stdio.h>

void main()
{
	int n,dig=0,rev=0,x;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	x = n;
	
	while(n != 0)
	{
		dig = n%10;
		rev = rev*10 + dig;
		n /= 10;
	}
	
	if(x == rev)
		printf("Palindrome \n");
	else
		printf("Non Palindrome \n");
}
