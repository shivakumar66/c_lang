#include<stdio.h>
void fun2()
{
	extern int a;
        //extern int b;
	printf("\nextern a=%d",a);
	//printf("\nstatic another file=%d",b);
}

