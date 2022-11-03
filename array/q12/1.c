#include<stdio.h>
void large(int arr[],int n);
int main()
{
	int s[20];
	int m,i;
	printf("enter the array size :");
	scanf("%d",&m);
        printf("enter the array elements  :");
	for(i=0;i<m;i++)
	{
		scanf("%d",&s[i]);
	}
	 printf(" the array elements  :");
        for(i=0;i<m;i++)
        {
                printf("%d",s[i]);
        }
	large(s,m);
	return 0;
}
   void large(int arr[],int n)
{
	int i,g;
	   g=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>g)
			g=arr[i];

	}
	printf("\nthe largest number is = %d ",g);
}

	
