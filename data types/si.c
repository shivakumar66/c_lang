#include<stdio.h>
int main()
{
	int p,t,r ;
	float i;
	 printf("enter the amount :\n");
		 scanf("%d",&p);
	 printf("enter the time :\n");
	 scanf("%d",&t);
	 printf("enter the rate of interest :\n");
	 scanf("%d",&r);

	 i= (p * t * r)/100;
	 printf("the interest is  :%f\n", i);
	 return 0;
}
