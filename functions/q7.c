#include<stdio.h>
#include<ctype.h>
void main()
{
	char c;
	printf("enter upper case alphabet :");
	scanf("%c",&c);
	(c>='A' && c<= 'Z')?printf("the lower case alphabet is %c",tolower(c)):printf("enter alphabet is not uppercase :");
}
