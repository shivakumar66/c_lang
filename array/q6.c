#include<stdio.h>
int main()
{
	int arr[10];
	
	int i,n,count,m;
	printf("enter the array range");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("\nthis number is odd =");
	for(i=0;i<n;i++){
		if(i%2==0){
		printf("\t%d",arr[i]);
		}
	}
	printf("\nthis number is even=");
	for(i=0;i<n;i++)
	{

		if(i%2!=0){
		printf("\t%d",arr[i]);
		}
	}
}






