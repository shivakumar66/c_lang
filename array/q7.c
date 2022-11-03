#include<stdio.h>
int main()
{
	int arr[10];
	int arr1[10];
	int arr2[10];
	int n,i;
	printf("enter the array range ");
	scanf("%d",&n);
	printf("enter the array elements ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
            printf("the array elements are :");
	    for(i=0;i<=n;i++)
	    {
	    printf("%d",arr[i]);
	    }
	    printf("copied  array is ");
	    for(i=0;i<=n;i++)
	    {
		    arr1[i]=arr[i];
		    printf("%d\t",arr1[i]);
	    }
	    printf("the copying of array in reverse order ");
	    for(i=n;i>=0;i--)
	    {
		    arr2[i]=arr[i];
		    printf("%d\t",arr2[i]);
	    }
	    return 0;
}
