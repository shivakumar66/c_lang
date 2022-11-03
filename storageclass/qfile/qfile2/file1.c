#include<stdio.h>
void main()
{

	auto int a=20;
       	{
		a=40;
		printf("\nauto a=%d",a);
	}
	printf("\nAUTO IS THE ONLY BLOCK OF THE CODE AND ITS LIFE IS ONLY IN THE BLOCK");
	stack();
	stack();
	printf("\nSTATIC IS THE WE CALL THE VARIABLE IN FUNCTION AND ITS LIFE IS END OF THE PROGRAM");	

}
void stack()
{
	static b=10;
	printf("\nstatic=%d",b);
	b++;
}
