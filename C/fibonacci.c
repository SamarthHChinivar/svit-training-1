#include <stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
        
    else if(n==1 || n==2)
        return 1;
        
    else
        return fib(n-1) + fib(n-2); 
}

int main()
{
	int n,r;
	
	printf("Enter number: \n");
	scanf("%d",&n);
	
    r = fib(n);
    printf("%d",r);
	
	return 0;
}
