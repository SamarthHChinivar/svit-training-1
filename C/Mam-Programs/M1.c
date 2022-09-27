#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],c[10];
	printf("enter the string\n");
	scanf("%s %s",&a,&b);
	strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("%s\t%s",a,b);
}
