#include<stdio.h>
void fun2()
{
	extern int a;
	int b=20,c;
	c=a+b;
	printf("\nvalue of extern a=%d",a);
	printf("\ncalling global a and addition with b=%d",c);
}
