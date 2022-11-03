#include<stdio.h>
int main()
	{
		int arr[10];
		int i,j,n,c=0,d=0,m=0;
		printf("enter the array range");
		scanf("%d",&n);
		printf("enter the array elements:");
		for(i=0;i<=n;i++)
		{
                          scanf("%d",&arr[i]);
		}
		 for(i=0;i<=n;i++)
                {
                          printf("%d",arr[i]);
                }

                      //      int length=sizeof(arr)/sizeof(arr[0]);
			    for(i=0;i<=n;i++)
			    {
				    for(j=i+1;j<=n;j++)
				    {
					    if(arr[i]==arr[j])
					    {
						    printf("\n%d\n",arr[j]);
						    c++;
					    }
				    }
			    }
			    return 0;
	}
