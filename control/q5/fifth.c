#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if(i%2==0)
		{
			continue ;
		}
		sum = sum +i ;
	}
	printf("the sum is %d\n",sum);
	return 0;
}
