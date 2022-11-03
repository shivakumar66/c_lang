#include<stdio.h>
long int fact(long int x);
int main()
{
     long int n,r;
	long int m,s;
	printf("enter the value of n");
	scanf("%ld",&n);
	printf("enter the value of r ");
	scanf("%ld",&r);
	m=n-r;
	s=fact(n)/fact(m);
	printf("the factorial of the number is %ld",s);
	return 0;
}
long int fact(long int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}
    else 
    {
	    return x *fact(x-1);
    }
}


