#include<stdio.h>
int main()
{
	int arr[10];
	int sum=0,i,n,m;
	printf("enter the array range :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		printf("%d",arr[i]);
	}
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	m=sum/n;
	printf("the sum of the numbers is %d",sum);
	printf("the average of numbers is %d",m);
	return 0;
}
		

