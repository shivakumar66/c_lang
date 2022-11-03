#include<stdio.h>
int main()
{
	int n,m,r;
	int sum=0;
	printf("enter the number ");
	scanf("%d",&n);
	m=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(m==sum){
		printf("the number is armstrong");
	}
	else{
		printf("the number is not a armstrong");
	}
}


