#include<stdio.h>
long int fact(long int n);
	int main()
{
	long int n,r,d;
	long int c,p;
	printf("enter a number N :");
	scanf("%ld",&n);
	printf("enter a number R :");
	scanf("%ld",&r);
	d=n-r;
	p=fact(n)/fact(d);
	c=fact(n)/(fact(d)*fact(r));
	printf("the value of npr=%ldp%ld is : %ld\n",n,r,p);
	printf("the value of ncr=%ldc%ld is : %ld\n",n,r,c);
	return 0;
}
long int fact(long int n)
{
	if(n==0 || n==1)
	
		return 1;
	
	else
		return n * fact(n-1);
}

