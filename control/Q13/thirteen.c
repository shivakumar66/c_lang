//program to print  sum of the digits //

#include<stdio.h>
int main()
{
	int n,r;
	int sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("the sum of the digits is %d\n",sum);
	return 0;
}
