#include<stdio.h>
int main()
{
	int i,j,n,t;
	int arr[10];
	printf("enter the size :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
					t=arr[i];
					arr[i]=arr[j];
					arr[j]=t;
					}
		}
	}
			printf("\t numbers in descending order :\t");
			for(i=0;i<n;i++)
			{
				printf("%d",arr[i]);
			}
				printf("the largest number is %d\n",arr[0]);
				printf("the second largest number is %d\n",arr[1]);
				printf("the smallest  number is %d\n",arr[n-1]);
				

			

	return 0;
}
