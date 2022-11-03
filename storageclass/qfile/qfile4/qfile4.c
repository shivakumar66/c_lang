#include<stdio.h>
void main()
{
 	auto int a=10;
	{
	register int a=12;
	printf("\n------------------------------------------------------------------------------------------------------");
	printf("\nTHIS NUMBER IS THE REGISTER AND THIS IS STORE IN THE CPU REGISTOR AND FASTER THAN THE AUTO");
	printf("\nregister a is=%d",a);
	}
	 printf("\n------------------------------------------------------------------------------------------------------");
	printf("\nTHIS NUMBER IS THE AUTO MEANS ITS LIFE IS ONLY UPTO THE BLOCK AND THIS IS STORE IN THE MEMORY");
	printf("\nauto a is=%d",a);

}
