#include<stdio.h>
int main()
{
	int arr[20];
	int n,p,i,k;
	printf("enter the array range :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array elements are :");
	 for(i=0;i<=n;i++)
        {
                printf("%d",arr[i]);
        }
          printf("enter the position to insert ");
	  scanf("%d",&p);
	  printf("enter the element to insert ");
          scanf("%d",&k);

	   for(i=n;i>=n;i--)
        {       arr[i+1]=arr[i];
		if(i==p)
		{
			arr[i]=k;
			break;
                   }
        }   
        printf("the inserted  array elements are :");
         for(i=0;i<=n+1;i++)
        {
                printf("%d",arr[i]);
        }
	 return 0;
}


