#include<stdio.h>
int main()
{
	int n,m,r,sum=0;
	printf("enter the number ");
	scanf("%d",&n);
	m=n;
	while(n>0){
		r=n%10;
		sum = (sum*10)+r;
		n=n/10;
	}
	if(sum==m){
		printf(" the number is palindrome");
	}
	else{
		printf("the number is not a palindrome");
	}
}
