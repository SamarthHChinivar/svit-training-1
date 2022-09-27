#include<stdio.h>

void main()
{
	float w1,w2;
	printf("enter the actual weight according to your height\n");
	scanf("%f",&w1);
	printf("enter your current weight\n");
	scanf("%f",&w2);
	printf("is w1==w2 ? %d\n",w1==w2);
	printf("is w1>w2 ? %d\n",w1>w2);
	printf("is w1>=w2 ? %d\n",w1>=w2);
	printf("is w1<w2 ? %d\n",w1<w2);
	printf("is w1<=w2 ? %d\n",w1<=w2);
	printf("is w1!=w2 ? %d\n",w1!=w2);
}
