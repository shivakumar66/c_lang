#include<stdio.h>
#include"head.h"
int a=20;
void fun()
{
      static int a;
	printf("\nstatic a=%d",a);
	a++;
}
void main()
{
  int  a=5;
         {
	auto int a=10;
	printf("\nauto a=%d",a);
	}
        {
         register int a=230;
	printf("\nregister=%d",a);
        }
	fun2();
        fun();
	fun();
printf("\nglobal a=%d",a);


}
