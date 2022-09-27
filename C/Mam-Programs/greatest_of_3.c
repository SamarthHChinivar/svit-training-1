#include <stdio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	d = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
	
	/* Alternative Approach */
	/*d = (a>b && a>c) ? a : ((b>c)?b:c);*/
	
	printf("Largest number: %d\n",d);
}
