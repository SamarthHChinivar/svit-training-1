#include <stdio.h>

void main()
{
	int per;
	
	printf("Enter Percentage: \n");
	scanf("%d",&per);
	
	if(per>90 && per<=100)
		printf("Outstanding\n");
	else if(per>80 && per<=90)
		printf("Excellent\n");
	else if(per>70 && per<=80)
		printf("Very Good\n");
	else if(per>65 && per<=70)
		printf("Good\n");
	else if(per>50 && per<=65)
		printf("Average\n");
	else if(per>40 && per<=50)
		printf("Below Average\n");
}
