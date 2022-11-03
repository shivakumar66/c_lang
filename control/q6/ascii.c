#include<stdio.h>
int main()
{
	char c;
	int m,n;
	printf("enter a character :");
	scanf("%c",&c);
	printf("the ascii value is %d=%c\n",c,c);
	m=c;
	if(c>='a' && c<='z'){
		n=m-96;
		printf("the digit is %d\n",n);
	}
	else if (c>='A' && c<= 'Z'){
		n=m-64;
		printf("the digit is %d\n",n);
	}
	return 0;
}
