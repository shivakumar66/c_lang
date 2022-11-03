#include<stdio.h>
int main()
{
	int arr[10];
	int i,j,n,m;
	printf("enter the array size :");
	scanf("%d",&n);

	printf("enter the array elements :");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("array elements are :");
        for(i=0;i<=n;i++)
        {
                printf("%d\a",arr[i]);
        }

	printf("enter the integer to be deleted from the array :");
	scanf("%d",&m);
         for(i=0;i<n;i++)
	 {
		 if(i==m)
		 {
			for(j=m; j<n; j++)
			{
				arr[j]=arr[j+1];
			}
		 }
	 }

	 for(i=0;i<=n-1;i++)
	 {
	 	printf(" %d ",arr[i]);
	 }
	 return 0;
}

