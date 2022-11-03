#include<stdio.h>
int main()
{
	int i,j,n;
	int c;
	printf("enter the maximum range :");
	scanf("%d",&n);
	printf("the prime numbers are :\n");
	for(i=1;i<=n;i++)
	{
		c = 0;
		
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c++;
				break ;
			}
		}
		if(c==0 && i != 1)
		{
			printf("%d \t",i);
		}
	}
	return 0;
	
}
				

