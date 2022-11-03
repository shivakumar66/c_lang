#include<stdio.h>
#include"head.h"
int a=10;
static int b=20;
void main()
{
	printf("\nglobal a=%d",a);
	printf("\nstatic b=%d",b);
	fun();
	fun2();
}
void fun()
{
	printf("\nglobal in function=%d",a);
	printf("\nstatic in function=%d",b);
}
