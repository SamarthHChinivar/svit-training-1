#include <stdio.h>

void main()
{
	int ch;
	printf("----Welcome to BL Cafe----\n");
	printf("1.donuts\n2.cake\n3.juice\n4.upinkayi\n5.Gobi\n");
	printf("Enter Choice:\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("Vade Cake\n");
		break;
		case 2: printf("Cake thinno le\n");
		break;
		case 3: printf("Juice Kuditya ?????\n");
		break;
		case 4: printf("Boys na hakond bartini\n");
		break;
		case 5: printf("You are Special\n");
		break;
		
		default: printf("Wrong Choice\n");
		break;	
	}	
}
